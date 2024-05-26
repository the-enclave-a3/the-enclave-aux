class JLTS_DC15X;
class MTI_DC15X: JLTS_DC15X {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15x): MTI_DC15X {
	scope = 2;
	baseWeapon = QGWEAPON(dc15x);
	author = AUTHOR;
	displayName = "[TEA] DC-15X";

	magazines[] = {QGMAGAZINE(dc15x),QGMAGAZINE(dc15x_stun),QGMAGAZINE(dc15x_ai_deraformine),QGMAGAZINE(dc15x_ai_latheniol)};
	magazineWell[] = {QGMAGWELL(dc15x)};
	//modes[] = {"Single"};
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

