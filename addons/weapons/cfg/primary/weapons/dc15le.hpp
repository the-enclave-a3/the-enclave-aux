class MTI_DC15A;
class MTI_DC15LE: MTI_DC15A {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15le): MTI_DC15LE {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DC-15LE";

	magazines[] = {QGMAGAZINE(dc15le)};
	magazineWell[] = {QGMAGWELL(enc_dc15le_magwell)};
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
