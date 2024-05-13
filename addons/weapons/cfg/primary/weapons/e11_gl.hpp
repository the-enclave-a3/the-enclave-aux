class 3AS_E11GL_Base_F;
class 3AS_E11_GL: 3AS_E11GL_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(e11_gl): 3AS_E11_GL {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] E-11 GL";

	magazines[] = {QGMAGAZINE(e11_gl)};
	magazineWell[] = {QGMAGWELL(enc_e11_gl_magwell)};
	//modes[] = {"Single","Burst","FullAuto"};
	//muzzles[] = {"this","3AS_E11GL"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

