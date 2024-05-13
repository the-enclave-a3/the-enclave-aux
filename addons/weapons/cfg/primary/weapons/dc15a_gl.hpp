class JLTS_DC15A_ugl;
class MTI_DC15A_GL: JLTS_DC15A_ugl {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15a_gl): MTI_DC15A_GL {
	scope = 2;
	baseWeapon = QGWEAPON(dc15a_gl);
	author = AUTHOR;
	displayName = "[ENC] DC-15A GL";

	magazines[] = {QGMAGAZINE(dc15a_gl)};
	magazineWell[] = {QGMAGWELL(enc_dc15a_gl_magwell)};
	//modes[] = {"Single","Burst"};
	//muzzles[] = {"this","EGLM","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

