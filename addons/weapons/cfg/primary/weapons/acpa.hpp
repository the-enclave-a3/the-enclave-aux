class SWLW_ACPA;
class MTI_ACPA: SWLW_ACPA {
	class WeaponSlotsInfo;
};
class GWEAPON(acpa): MTI_ACPA {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] ACP-A";

	magazines[] = {QGMAGAZINE(acpa)};
	magazineWell[] = {QGMAGWELL(enc_acpa_magwell)};
	//modes[] = {"Single","close","short","medium"};
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

