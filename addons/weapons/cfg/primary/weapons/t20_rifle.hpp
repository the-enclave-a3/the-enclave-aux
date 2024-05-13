class SFA_rifle_base;
class SFA_T20_rifle: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(t20_rifle): SFA_T20_rifle {
	scope = 2;
	baseWeapon = QGWEAPON(t20_rifle);
	author = AUTHOR;
	displayName = "[ENC] T-20 Rifle";

	magazines[] = {QGMAGAZINE(t20_rifle)};
	magazineWell[] = {QGMAGWELL(t20_rifle)};
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

