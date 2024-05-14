class ls_weapon_ls150_primary;
class MTI_LS150: ls_weapon_ls150_primary {
	class WeaponSlotsInfo;
};
class GWEAPON(ls150): MTI_LS150 {
	scope = 2;
	baseWeapon = QGWEAPON(ls150);
	author = AUTHOR;
	displayName = "[ENC] LS-150";

	magazines[] = {QGMAGAZINE(ls150)};
	magazineWell[] = {QGMAGWELL(ls150)};
	//modes[] = {"FullAuto"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

