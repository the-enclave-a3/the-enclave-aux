class SWLW_GL;
class MTI_RD4: SWLW_GL {
	class WeaponSlotsInfo;
};
class GWEAPON(rd4): MTI_RD4 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] RD-4";

	magazines[] = {QGMAGAZINE(rd4_1rnd),QGMAGAZINE(rd4_6rnd),MACRO_GL_MAGAZINES};
	magazineWell[] = {QGMAGWELL(rd4)};
	//modes[] = {"Single","close","short","medium"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

