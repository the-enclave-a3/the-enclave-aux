class 3AS_DLT19_Base_F;
class 3AS_DLT19: 3AS_DLT19_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dlt19): 3AS_DLT19 {
	scope = 2;
	baseWeapon = QGWEAPON(dlt19);
	author = AUTHOR;
	displayName = "[TEA] DLT-19";

	magazines[] = {QGMAGAZINE(dlt19)};
	magazineWell[] = {QGMAGWELL(dlt19)};
	//modes[] = {"Single","FullAuto"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {"3AS_Imp_Optic_1","3AS_Imp_Optic_2","3AS_Imp_Optic_3","3AS_Imp_Optic_4",RCO_LIST,MRCO_LIST,HOLO_LIST,MRD_LIST};
		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

