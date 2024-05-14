class ImperialRifle_Base;
class WM_E11D: ImperialRifle_Base {
	class WeaponSlotsInfo;
};
class GWEAPON(e11d): WM_E11D {
	scope = 2;
	baseWeapon = QGWEAPON(e11d);
	author = AUTHOR;
	displayName = "[ENC] E-11D";

	magazines[] = {QGMAGAZINE(e11d)};
	magazineWell[] = {QGMAGWELL(e11d)};
	//modes[] = {"Single","FullAuto","close","short","medium"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {RCO_LIST,MRCO_LIST,HOLO_LIST,MRD_LIST};
		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

