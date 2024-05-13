class JLTS_DP23;
class MTI_DP23: JLTS_DP23 {
	class WeaponSlotsInfo;
};
class GWEAPON(dp23): MTI_DP23 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DP-23";

	magazines[] = {QGMAGAZINE(dp23)};
	magazineWell[] = {QGMAGWELL(enc_dp23_magwell)};
	//modes[] = {"Single"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

