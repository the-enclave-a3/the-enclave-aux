class ls_weapon_dualDC17_secondary;
class MTI_DC17s_dual: ls_weapon_dualDC17_secondary {
	class WeaponSlotsInfo;
};
class GWEAPON(dc17s_dual): MTI_DC17s_dual {
	scope = 2;
	baseWeapon = QGWEAPON(dc17s_dual);
	author = AUTHOR;
	displayName = "[ENC] DC-17s (Dual)";

	magazines[] = {QGMAGAZINE(dc17s_dual)};
	magazineWell[] = {QGMAGWELL(enc_dc17s_dual_magwell)};
	//modes[] = {"Single","close","short","medium"};
	//muzzles[] = {"mti_weapons_core_Right","mti_weapons_core_Left"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};

	class XtdGearInfo {};
};

