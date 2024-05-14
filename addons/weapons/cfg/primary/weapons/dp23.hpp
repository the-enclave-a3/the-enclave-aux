class JLTS_DP23;
class MTI_DP23: JLTS_DP23 {
	class WeaponSlotsInfo;
};
class GWEAPON(dp23): MTI_DP23 {
	scope = 2;
	baseWeapon = QGWEAPON(dp23);
	author = AUTHOR;
	displayName = "[ENC] DP-23";

	magazines[] = {QGMAGAZINE(dp23)};
	magazineWell[] = {QGMAGWELL(dp23)};
	//modes[] = {"Single"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

