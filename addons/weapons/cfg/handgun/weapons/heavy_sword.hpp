class WBK_axe;
class LST_Heavy_Sword: WBK_axe {
	class WeaponSlotsInfo;
};
class GWEAPON(heavy_sword): LST_Heavy_Sword {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Heavy Sword";

	magazines[] = {};
	magazineWell[] = {QGMAGWELL(enc_heavy_sword_magwell)};
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

