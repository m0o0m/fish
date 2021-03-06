class DiceGamePanel extends BaseComponent implements IBase {
	public static ZERO_POINT_X: number = 145;
	public static ZERO_POINT_Y: number = 157;

	public static ARMATURE_ZERO_X: number = 70;
	public static ARMATURE_ZERO_Y: number = 80;

	private armature: dragonBones.Armature;
	private currentGridIndex: number = 0;
	private targetGridIndex: number = 0;
	private call: Function;
	private callOwner: any;

	public constructor() {
		super(false);
		this.skinName = "resource/game_skins/dice/DiceGameSkin.exml";
		// this.x = DiceGamePanel.ZERO_POINT_X;
		// this.y = DiceGamePanel.ZERO_POINT_Y;
		this.touchEnabled = true;
		this.touchChildren = false;
	}

	protected onSkinComplete(e: any): void {
		super.onSkinComplete(e);

		var dragonbonesData = RES.getRes("fishDb_json");
		var textureData = RES.getRes("texture_json");
		var texture = RES.getRes("texture_png");

		var dragonbonesFactory: dragonBones.EgretFactory = new dragonBones.EgretFactory();
		dragonbonesFactory.addDragonBonesData(dragonBones.DataParser.parseDragonBonesData(dragonbonesData));
		dragonbonesFactory.addTextureAtlas(new dragonBones.EgretTextureAtlas(texture, textureData));

		this.armature = dragonbonesFactory.buildArmature("Armature");
		dragonBones.WorldClock.clock.add(this.armature);
		this.armature.display.x = DiceGamePanel.ARMATURE_ZERO_X;
		this.armature.display.y = DiceGamePanel.ARMATURE_ZERO_Y;
		this.armature.animation.gotoAndPlay("newAnimation");
		TimerManager.instance.doLoop(33, this.initDb, this);
	}

	private initDb(): void {
		dragonBones.WorldClock.clock.advanceTime(24 / 1000);
	}

	private init(): void {
		// console.log("");
		var vo = ConfigModel.instance.diceMapGrid;
		vo.girdList.forEach(element => {
			var bmp: egret.DisplayObject
			switch (element.rewardType) {
				case 0:
					// bmp = MovieclipUtils.createMc("DiceGateMc_png", "DiceGateMc_json");
					// bmp.x = element.x;
					// bmp.y = element.y;
					// this.addChild(bmp);
					bmp = MovieclipUtils.createMc("DiceGateBoxMc_png", "DiceGateBoxMc_json");
					break;
				case 1:
					bmp = BitMapUtil.createBitmapByName("diceBox" + vo.awardMap[element.rewardNum - 1] + "_png");
					break;
				default:
					bmp = this.createAward(element.rewardType);
					break;
			}
			try {
				bmp.x = element.x;
				bmp.y = element.y;
			} catch (e) {
				console.error(e);
			}
			this.addChild(bmp);
		});

		this.armature.display.x = DiceGamePanel.ARMATURE_ZERO_X + vo.girdList[0].x;
		this.armature.display.y = DiceGamePanel.ARMATURE_ZERO_Y / 2 + vo.girdList[0].y;
	}

	public enter(data?: any): void {
		ConfigModel.instance.parseGridList(RES.getRes("grids_json"), this.init, this);
		this.addChild(this.armature.display);
	}

	public exit(): void {
		TimerManager.instance.clearTimer(this.initDb);
		try {
			this.armature.dispose();	//不知道为什么报错
		} catch (e) {
			console.error(e);
		}
	}

	public execute(data?: any): void {
		this.targetGridIndex = this.currentGridIndex + data[0];
		this.call = data[1];
		this.callOwner = data[2];
		this.goTarget();
	}

	private goTarget(): void {
		if (this.currentGridIndex < this.targetGridIndex) {
			this.currentGridIndex++;
			var vo: GridVo = ConfigModel.instance.diceMapGrid.girdList[this.currentGridIndex]
			this.move(vo.x + 40, vo.y + vo.offsetY);
		} else {
			var award = ConfigModel.instance.diceMapGrid.awardMap[ConfigModel.instance.diceMapGrid.girdList[this.currentGridIndex].rewardNum - 1];
			ClientModel.instance.openWindow(DiceAlert, "获得" + award + "万能豆奖励");
		}
	}

	private move(x, y): void {
		egret.Tween.get(this.armature.display, {
			onChange: () => {
				this.call.apply(this.callOwner, [x, y]);
			}, onChangeObj: this
		}).to({ x: x, y: y }, 300).call(this.goTarget, this)/*.call(this.call, this.callOwner, [x, y])*/;
	}

	private createAward(type: number): egret.DisplayObject {
		var temp: egret.DisplayObject;
		switch (type) {
			case 2:
				temp = BitMapUtil.createBitmapByName("diceAward1_png");
				break;
			case 3:
				temp = MovieclipUtils.createMc("diceAward2_png", "diceAward2_json");
				break;
			case 4:
				temp = BitMapUtil.createBitmapByName("diceAward3_png");
				break;
			case 5:
				temp = MovieclipUtils.createMc("diceAward4_png", "diceAward4_json");
				break;
			case 6:
				temp = BitMapUtil.createBitmapByName("diceAward5_png");
				break;
			case 7:
				temp = MovieclipUtils.createMc("diceAward6_png", "diceAward6_json");
				break;
		}
		return temp;
	}
}