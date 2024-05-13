class SFA_rifle_base;
class SFA_Causality: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(causality): SFA_Causality {
	scope = 2;
	baseWeapon = QGWEAPON(causality);
	author = AUTHOR;
	displayName = "[ENC] Causality";

	magazines[] = {QGMAGAZINE(causality)};
	magazineWell[] = {QGMAGWELL(causality)};
	//modes[] = {"Single","Burst","close","short","medium"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

