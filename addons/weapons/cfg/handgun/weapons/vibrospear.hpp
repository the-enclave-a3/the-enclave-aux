class WBK_brush_axe;
class LST_Spear: WBK_brush_axe {
	class WeaponSlotsInfo;
};
class GWEAPON(vibrospear): LST_Spear {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Vibrospear";

	magazines[] = {};
	magazineWell[] = {QGMAGWELL(enc_vibrospear_magwell)};
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
