class JLTS_DC15A_ugl;
class MTI_DC15A_GL: JLTS_DC15A_ugl {
	class EGLM;
	class WeaponSlotsInfo;
};
class GWEAPON(dc15a_gl): MTI_DC15A_GL {
	scope = 2;
	baseWeapon = QGWEAPON(dc15a_gl);
	author = AUTHOR;
	displayName = "[ENC] DC-15A GL";

	magazines[] = {QGMAGAZINE(dc15a)};
	magazineWell[] = {QGMAGWELL(dc15a)};
	//modes[] = {"Single","Burst"};
	//muzzles[] = {"this","EGLM","Stun"};

	class EGLM: EGLM {
		magazines[] = { MACRO_GL_MAGAZINES };
		magazineWell[] = {"MTI_UGL_magwell"};
	};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

