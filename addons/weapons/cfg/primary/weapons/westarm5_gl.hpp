class 3AS_WestarM5_GL;
class MTI_WestarM5_GL: 3AS_WestarM5_GL {
	class WeaponSlotsInfo;
};
class GWEAPON(westarm5_gl): MTI_WestarM5_GL {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Westar-M5 GL";

	magazines[] = {QGMAGAZINE(westarm5_gl)};
	magazineWell[] = {QGMAGWELL(enc_westarm5_gl_magwell)};
	//modes[] = {"Single","Burst","FullAuto"};
	//muzzles[] = {"this","Stun","3AS_WestarM5_GL_F"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

