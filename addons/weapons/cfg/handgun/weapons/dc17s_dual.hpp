class ls_weapon_dualDC17_secondary;
class MTI_DC17s_dual: ls_weapon_dualDC17_secondary {
	class mti_weapons_core_Right;
	class mti_weapons_core_Left;
	class WeaponSlotsInfo;
};
class GWEAPON(dc17s_dual): MTI_DC17s_dual {
	scope = 2;
	baseWeapon = QGWEAPON(dc17s_dual);
	author = AUTHOR;
	displayName = "[ENC] DC-17s (Dual)";

	magazines[] = {QGMAGAZINE(dc17s_dual)};
	magazineWell[] = {QGMAGWELL(dc17s_dual)};
	//modes[] = {"Single","close","short","medium"};
	//muzzles[] = {"mti_weapons_core_Right","mti_weapons_core_Left"};

	class mti_weapons_core_Right: mti_weapons_core_Right{
		magazines[] = {QGMAGAZINE(dc17s_dual)};
		magazineWell[] = {QGMAGWELL(dc17s_dual)};
	};

	class mti_weapons_core_Left: mti_weapons_core_Left{
		magazines[] = {QGMAGAZINE(dc17s_dual)};
		magazineWell[] = {QGMAGWELL(dc17s_dual)};
	};


	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};

	class XtdGearInfo {};
};

