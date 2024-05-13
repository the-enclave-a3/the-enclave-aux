class SFA_rifle_base;
class SFA_DLA13: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(dla13): SFA_DLA13 {
	scope = 2;
	baseWeapon = QGWEAPON(dla13);
	author = AUTHOR;
	displayName = "[ENC] DLA-13";

	magazines[] = {QGMAGAZINE(dla13)};
	magazineWell[] = {QGMAGWELL(dla13)};
	//modes[] = {"Single","Burst","close","short","medium"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

