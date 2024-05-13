class 3AS_WestarM5_GL;
class MTI_WestarM5_GL: 3AS_WestarM5_GL {
	class 3AS_WestarM5_GL_F;
	class WeaponSlotsInfo;
};
class GWEAPON(westarm5_gl): MTI_WestarM5_GL {
	scope = 2;
	baseWeapon = QGWEAPON(westarm5_gl);
	author = AUTHOR;
	displayName = "[ENC] Westar-M5 GL";

	magazines[] = {QGMAGAZINE(westarm5)};
	magazineWell[] = {QGMAGWELL(westarm5)};
	//modes[] = {"Single","Burst","FullAuto"};
	//muzzles[] = {"this","Stun","3AS_WestarM5_GL_F"};

	class 3AS_WestarM5_GL_F: 3AS_WestarM5_GL_F {
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

