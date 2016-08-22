class HitTestUtils {

	/**基于矩形的碰撞检测*/
	public static hitTest(obj1: egret.DisplayObject, obj2: egret.DisplayObject): boolean {
		var rect1: egret.Rectangle = obj1.getBounds();
		var rect2: egret.Rectangle = obj2.getBounds();
		var key: boolean = false;
		rect1.x = obj1.x;
		rect1.y = obj1.y;
		rect2.x = obj2.x;
		rect2.y = obj2.y;
		egret.Rectangle.release(rect1);
		egret.Rectangle.release(rect2);
		key = rect1.intersects(rect2);
		return key;
	}

	public static hitTestByRec(r1: egret.Rectangle, r2: egret.Rectangle): boolean {
		return r1.intersects(r2);
	}

}