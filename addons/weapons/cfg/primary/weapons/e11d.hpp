class ImperialRifle_Base;
class WM_E11D: ImperialRifle_Base {
	class WeaponSlotsInfo;
};
class GWEAPON(e11d): WM_E11D {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] E-11D";

	magazines[] = {QGMAGAZINE(e11d)};
	magazineWell[] = {QGMAGWELL(enc_e11d_magwell)};
	//modes[] = {"Single","FullAuto","close","short","medium"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

