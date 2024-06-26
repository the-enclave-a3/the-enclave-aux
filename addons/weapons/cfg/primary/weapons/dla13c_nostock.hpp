class SFA_rifle_base;
class SFA_DLA13_C2: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(dla13c_nostock): SFA_DLA13_C2 {
	scope = 2;
	baseWeapon = QGWEAPON(dla13c_nostock);
	author = AUTHOR;
	displayName = "[TEA] DLA-13C (No Stock)";

	magazines[] = {QGMAGAZINE(dla13c_nostock)};
	magazineWell[] = {QGMAGWELL(dla13c_nostock)};
	//modes[] = {"Single","FullAuto","close","short","medium"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

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

