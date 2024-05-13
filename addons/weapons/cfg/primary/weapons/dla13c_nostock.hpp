class SFA_rifle_base;
class SFA_DLA13_C2: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(dla13c_nostock): SFA_DLA13_C2 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DLA-13C (No Stock)";

	magazines[] = {QGMAGAZINE(dla13c_nostock)};
	magazineWell[] = {QGMAGWELL(enc_dla13c_nostock_magwell)};
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

