class 3AS_MPL_Base_F;
class 3AS_MPL_F: 3AS_MPL_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(mpl): 3AS_MPL_F {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] MPL";

	magazines[] = {QGMAGAZINE(mpl)};
	magazineWell[] = {QGMAGWELL(mpl)};
	//modes[] = {"Single","Burst"};
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

