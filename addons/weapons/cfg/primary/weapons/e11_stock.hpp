class 3AS_E11_Base_F;
class 3AS_E11Stock: 3AS_E11_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(e11_stock): 3AS_E11Stock {
	scope = 2;
	baseWeapon = QGWEAPON(e11_stock);
	author = AUTHOR;
	displayName = "[ENC] E-11 (Stock)";

	magazines[] = {QGMAGAZINE(e11_stock)};
	magazineWell[] = {QGMAGWELL(e11_stock)};
	//modes[] = {"Single","Burst","FullAuto"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {"3AS_Imp_Optic_1","3AS_Imp_Optic_2","3AS_Imp_Optic_3","3AS_Imp_Optic_E11",RCO_LIST,MRCO_LIST,HOLO_LIST,MRD_LIST};
		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

