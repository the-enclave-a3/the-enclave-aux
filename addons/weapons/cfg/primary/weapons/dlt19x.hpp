class 3AS_DLT19X_Base_F;
class 3AS_DLT19X: 3AS_DLT19X_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dlt19x): 3AS_DLT19X {
	scope = 2;
	baseWeapon = QGWEAPON(dlt19x);
	author = AUTHOR;
	displayName = "[ENC] DLT-19X";

	magazines[] = {QGMAGAZINE(dlt19x)};
	magazineWell[] = {QGMAGWELL(dlt19x)};
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

