class SFA_rifle_base;
class SFA_DLA13_C: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(dla13c): SFA_DLA13_C {
	scope = 2;
	baseWeapon = QGWEAPON(dla13c);
	author = AUTHOR;
	displayName = "[TEA] DLA-13C";

	magazines[] = {QGMAGAZINE(dla13c)};
	magazineWell[] = {QGMAGWELL(dla13c)};
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

