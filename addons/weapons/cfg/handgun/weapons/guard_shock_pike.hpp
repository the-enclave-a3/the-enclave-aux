class WBK_brush_axe;
class LFP_Guard_Shock_Pike: WBK_brush_axe {
	class WeaponSlotsInfo;
};
class GWEAPON(guard_shock_pike): LFP_Guard_Shock_Pike {
	scope = 2;
	baseWeapon = QGWEAPON(guard_shock_pike);
	author = AUTHOR;
	displayName = "[TEA] Guard Shock Pike";

	magazines[] = {};
	magazineWell[] = {};
	//modes[] = {"Single"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

