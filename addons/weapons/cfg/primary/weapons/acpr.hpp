class SWLW_ACPR;
class MTI_ACPR: SWLW_ACPR {
	class WeaponSlotsInfo;
};
class GWEAPON(acpr): MTI_ACPR {
	scope = 2;
	baseWeapon = QGWEAPON(acpr);
	author = AUTHOR;
	displayName = "[TEA] ACP-R";

	magazines[] = {QGMAGAZINE(acpr)};
	magazineWell[] = {QGMAGWELL(acpr)};
	//modes[] = {"FullAuto","close","short","medium"};
	//muzzles[] = {"this","Stun"};

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

