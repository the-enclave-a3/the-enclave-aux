class 3AS_E11GL_Base_F;
class 3AS_E11_GL: 3AS_E11GL_Base_F {
	class 3AS_E11GL;
	class WeaponSlotsInfo;
};
class GWEAPON(e11_gl): 3AS_E11_GL {
	scope = 2;
	baseWeapon = QGWEAPON(e11_gl);
	author = AUTHOR;
	displayName = "[TEA] E-11 GL";

	magazines[] = {QGMAGAZINE(e11)};
	magazineWell[] = {QGMAGWELL(e11)};
	//modes[] = {"Single","Burst","FullAuto"};
	muzzles[] = {"this","3AS_E11GL","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class 3AS_E11GL: 3AS_E11GL {
		magazines[] = { MACRO_GL_MAGAZINES };
		magazineWell[] = {"MTI_UGL_magwell"};
	};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {"3AS_Imp_Optic_1","3AS_Imp_Optic_2","3AS_Imp_Optic_3","3AS_Imp_Optic_E11",RCO_LIST,MRCO_LIST,HOLO_LIST,MRD_LIST};
		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

