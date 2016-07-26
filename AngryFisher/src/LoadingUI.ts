/**
 * 加载进度
 */
class LoadingUI extends BaseComponent implements IBase {

    private versionText: eui.Label;
    private tipText: eui.Label;
    private tempText: eui.Label;
    private current: number = 0;
    private callBack: Function;
    private callObj: any;

    private static _instance: LoadingUI;
    private static tipList: Array<string> = ["抵制不良游戏，拒绝盗版游戏", "注意自我保护，谨防受骗上当", "适度游戏益脑，沉迷游戏伤身", "合理安排时间，享受健康生活"];
    private static assetsList: Array<string> = ["fish", "config",  "player","bg"];
    private static total: number = LoadingUI.assetsList.length;

    public constructor() {
        super();
        this.addEventListener(eui.UIEvent.COMPLETE, this.onSkinComplete, this);
        this.skinName = "resource/game_skins/LoadSkin.exml";
        this.enter();
        // this.visible = false;
    }

    protected createChildren() {
        super.createChildren();
    }

    public onSkinComplete(e): void {
        super.onSkinComplete(e);
        LoadingUI.instance.removeEventListener(eui.UIEvent.COMPLETE, this.onSkinComplete, this);
        LoadingUI.instance.onConfigComplete();
        LoadingUI.instance.tempText.text = "当前加载进度：\n总进度：";
    }

    public static get instance(): LoadingUI {
        if (LoadingUI._instance == null) {
            LoadingUI._instance = new LoadingUI();
        }
        return LoadingUI._instance;
    }

    /**
     * 统一加载所有的资源
     */
    public loadAssets(callBack?: Function, callObj?: any): void {
        if (callBack != null) {
            this.callBack = callBack;
            this.callObj = callObj;
        }
        if (LoadingUI.assetsList.length > 0) {
            var groupName: string = LoadingUI.assetsList.shift();
            // console.log("开始加载资源:" + groupName);
            RES.addEventListener(RES.ResourceEvent.GROUP_COMPLETE, this.onComplete, this);
            RES.addEventListener(RES.ResourceEvent.GROUP_LOAD_ERROR, this.onError, this);
            RES.addEventListener(RES.ResourceEvent.GROUP_PROGRESS, this.onResourceProgress, this);
            RES.loadGroup(groupName);
            LoadingUI.instance.current++;
        } else {
            RES.removeEventListener(RES.ResourceEvent.GROUP_COMPLETE, this.onComplete, this);
            RES.removeEventListener(RES.ResourceEvent.GROUP_LOAD_ERROR, this.onError, this);
            RES.removeEventListener(RES.ResourceEvent.GROUP_PROGRESS, this.onResourceProgress, this);
            LoadingUI.instance.tempText.text = "资源加载完毕！";
            if (this.callBack != null) {
                this.callBack.call(this.callObj);
            }
            LoadingUI.instance.exit();
            ClientModel.instance.onAssetsComplete();
            // TimerManager.instance.doOnce(500, ClientModel.instance.onAssetsComplete, [this]);
        }
    }

    private onComplete(event: RES.ResourceEvent): void {
        LoadingUI.instance.loadAssets();
        if (event.groupName == "config") {
            ConfigModel.instance.parse(RES.getRes("game_json"));
            ConfigModel.instance.parseFish(RES.getRes("fish_json"));
            ConfigModel.instance.parseFishPath();
        }
    }

    private onError(event: RES.ResourceEvent): void {
        console.error("加载资源遇到错误");
        // InterfaceManager.instance.onLoadeError(TimeUtils.timestampDate());
    }

    private onResourceProgress(event: RES.ResourceEvent): void {
        LoadingUI.instance.setProgress(event.itemsLoaded, event.itemsTotal);
    }

    public setProgress(current, total): void {
        if (LoadingUI.instance.tempText != null) {
            LoadingUI.instance.tempText.text = "当前加载进度：[" + Math.floor((current / total) * 100) + "/100]" + "\n总进度：" + "[" + LoadingUI.instance.current + "/" + LoadingUI.total + "]";
        }
    }

    private onConfigComplete(evt?: any): void {
        if (LoadingUI.instance.versionText != null) {
            LoadingUI.instance.versionText.text = "程序版本：" + Main.VERSION + "\n配置文件：" + ConfigModel.instance.version;
        }
    }

    private changTip(target: LoadingUI): void {
        // if (target.tipText != null) {
        //     target.tipText.text = LoadingUI.tipList[parseInt((Math.random() * LoadingUI.tipList.length) + "")];
        // }
    }

    public enter(data?: any): void {
        GameDispatcher.addEventListener(BaseEvent.CONFIG_INIT_COMPLETE_EVENT, this.onConfigComplete, this);
        this.changTip(this);
        TimerManager.instance.doLoop(2000, this.changTip, this);
    }

    public exit(data?: any): void {
        TimerManager.instance.clearTimer(this.changTip);
        RES.removeEventListener(RES.ResourceEvent.GROUP_COMPLETE, this.onComplete, this);
        RES.removeEventListener(RES.ResourceEvent.GROUP_LOAD_ERROR, this.onError, this);
        RES.removeEventListener(RES.ResourceEvent.GROUP_PROGRESS, this.onResourceProgress, this);
        GameDispatcher.instance.removeEventListener(BaseEvent.CONFIG_INIT_COMPLETE_EVENT, this.onConfigComplete, this);
        if (this.parent != null) {
            this.parent.removeChild(this);
        }
    }

    public execute(data?: any): void {

    }

}
