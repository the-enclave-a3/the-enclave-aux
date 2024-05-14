class 3AS_PLX1_F;
class MTI_PLX1: 3AS_PLX1_F {
	class WeaponSlotsInfo;
};
class GWEAPON(plx1): MTI_PLX1 {
	scope = 2;
	author = AUTHOR;
	baseWeapon = QGWEAPON(plx1);
	displayName = "[ENC] PLX-1";

	magazines[] = {QGMAGAZINE(plx1_at),QGMAGAZINE(plx1_aa)};
	magazineWell[] = {QGMAGWELL(plx1)};
	//modes[] = {"Single","TopDown"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

