class SWLW_ACPR;
class MTI_ACPR: SWLW_ACPR {
	class WeaponSlotsInfo;
};
class GWEAPON(acpr): MTI_ACPR {
	scope = 2;
	baseWeapon = QGWEAPON(acpr);
	author = AUTHOR;
	displayName = "[ENC] ACP-R";

	magazines[] = {QGMAGAZINE(acpr)};
	magazineWell[] = {QGMAGWELL(enc_acpr_magwell)};
	//modes[] = {"FullAuto","close","short","medium"};
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

