class 3AS_DC15C_GL;
class MTI_DC15C_GL: 3AS_DC15C_GL {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15c_gl): MTI_DC15C_GL {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DC-15C GL";

	magazines[] = {QGMAGAZINE(dc15c_gl)};
	magazineWell[] = {QGMAGWELL(enc_dc15c_gl_magwell)};
	//modes[] = {"FullAuto","Single"};
	//muzzles[] = {"this","Stun","3AS_15CGL"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};
