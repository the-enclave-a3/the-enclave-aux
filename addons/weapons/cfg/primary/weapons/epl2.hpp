class JLTS_EPL2;
class MTI_EPL2: JLTS_EPL2 {
	class WeaponSlotsInfo;
};
class GWEAPON(epl2): MTI_EPL2 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] EPL-2";

	magazines[] = {QGMAGAZINE(epl2)};
	magazineWell[] = {QGMAGWELL(epl2)};
	//modes[] = {"Single"};
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

