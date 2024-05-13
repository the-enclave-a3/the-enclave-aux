class SFA_rifle_base;
class SFA_DLA13_C: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(dla13c): SFA_DLA13_C {
	scope = 2;
	baseWeapon = QGWEAPON(dla13c);
	author = AUTHOR;
	displayName = "[ENC] DLA-13C";

	magazines[] = {QGMAGAZINE(dla13c)};
	magazineWell[] = {QGMAGWELL(enc_dla13c_magwell)};
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

