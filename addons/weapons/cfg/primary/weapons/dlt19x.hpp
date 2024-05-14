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
			MACRO_COWS_DEFS;
			compatibleItems[] = {"3AS_Imp_Optic_1","3AS_Imp_Optic_2","3AS_Imp_Optic_3","3AS_Imp_Optic_4","3AS_Imp_Optic_DLT19x",DMS_LIST,LRPS_LIST};
		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

