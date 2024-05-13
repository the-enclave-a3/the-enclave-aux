class JLTS_DC15A_plastic;
class MTI_DC15A: JLTS_DC15A_plastic {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15a): MTI_DC15A {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DC-15A";

	magazines[] = {QGMAGAZINE(dc15a)};
	magazineWell[] = {QGMAGWELL(enc_dc15a_magwell)};
	//modes[] = {"Single","Burst"};
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

