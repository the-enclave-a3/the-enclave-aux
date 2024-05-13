class MTI_DC15A;
class MTI_DC15LE: MTI_DC15A {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15le): MTI_DC15LE {
	scope = 2;
	baseWeapon = QGWEAPON(dc15le);
	author = AUTHOR;
	displayName = "[ENC] DC-15LE";

	magazines[] = {QGMAGAZINE(dc15le)};
	magazineWell[] = {QGMAGWELL(dc15le)};
	//modes[] = {"Single"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

