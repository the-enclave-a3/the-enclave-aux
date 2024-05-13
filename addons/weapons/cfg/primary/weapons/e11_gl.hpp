class 3AS_E11GL_Base_F;
class 3AS_E11_GL: 3AS_E11GL_Base_F {
	class 3AS_E11GL;
	class WeaponSlotsInfo;
};
class GWEAPON(e11_gl): 3AS_E11_GL {
	scope = 2;
	baseWeapon = QGWEAPON(e11_gl);
	author = AUTHOR;
	displayName = "[ENC] E-11 GL";

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
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

