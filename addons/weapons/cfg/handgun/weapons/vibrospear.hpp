class WBK_brush_axe;
class LST_Spear: WBK_brush_axe {
	class WeaponSlotsInfo;
};
class GWEAPON(vibrospear): LST_Spear {
	scope = 2;
	baseWeapon = QGWEAPON(vibrospear);
	author = AUTHOR;
	displayName = "[ENC] Vibrospear";

	magazines[] = {};
	magazineWell[] = {};
	//modes[] = {"Single"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

