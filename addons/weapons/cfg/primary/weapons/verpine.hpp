class MTI_Verpine_base;
class MTI_Verpine: MTI_Verpine_base {
	class WeaponSlotsInfo;
};
class GWEAPON(verpine): MTI_Verpine {
	scope = 2;
	baseWeapon = QGWEAPON(verpine);
	author = AUTHOR;
	displayName = "[ENC] Verpine Shatter Rifle";

	magazines[] = {QGMAGAZINE(verpine),QGMAGAZINE(verpine_improv),QGMAGAZINE(verpine_apds),QGMAGAZINE(verpine_ai_deraformine),QGMAGAZINE(verpine_ai_latheniol),QGMAGAZINE(verpine_tracking),QGMAGAZINE(verpine_ion),QGMAGAZINE(verpine_acid)};
	magazineWell[] = {QGMAGWELL(verpine)};
	//modes[] = {"Single","single_medium_optics1","single_far_optics2"};
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

