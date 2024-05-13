class ls_weapon_ls150_primary;
class MTI_LS150: ls_weapon_ls150_primary {
	class WeaponSlotsInfo;
};
class GWEAPON(ls150): MTI_LS150 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] LS-150";

	magazines[] = {QGMAGAZINE(ls150)};
	magazineWell[] = {QGMAGWELL(enc_ls150_magwell)};
	//modes[] = {"FullAuto"};
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

