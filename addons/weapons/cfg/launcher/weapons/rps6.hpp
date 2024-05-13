class JLTS_RPS6;
class MTI_RPS6: JLTS_RPS6 {
	class WeaponSlotsInfo;
};
class GWEAPON(rps6): MTI_RPS6 {
	scope = 2;
	baseWeapon = QGWEAPON(rps6);
	author = AUTHOR;
	displayName = "[ENC] RPS-6";

	magazines[] = {QGMAGAZINE(rps6_at),QGMAGAZINE(rps6_he)};
	magazineWell[] = {QGMAGWELL(enc_rps6_magwell)};
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

