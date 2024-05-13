class SFA_rifle_base;
class SFA_Causality: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(causality): SFA_Causality {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Causality";

	magazines[] = {QGMAGAZINE(causality)};
	magazineWell[] = {QGMAGWELL(enc_causality_magwell)};
	//modes[] = {"Single","Burst","close","short","medium"};
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

