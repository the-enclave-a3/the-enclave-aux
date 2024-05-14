class 3AS_DC15C_GL;
class MTI_DC15C_GL: 3AS_DC15C_GL {
	class 3AS_15CGL;
	class WeaponSlotsInfo;
};
class GWEAPON(dc15c_gl): MTI_DC15C_GL {
	scope = 2;
	baseWeapon = QGWEAPON(dc15c_gl);
	author = AUTHOR;
	displayName = "[ENC] DC-15C GL";

	magazines[] = {QGMAGAZINE(dc15c)};
	magazineWell[] = {QGMAGWELL(dc15c)};
	//modes[] = {"FullAuto","Single"};
	//muzzles[] = {"this","Stun","3AS_15CGL"};

	class 3AS_15CGL: 3AS_15CGL {
		magazines[] = { MACRO_GL_MAGAZINES };
		magazineWell[] = {"MTI_UGL_magwell"};
	};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

