class SFA_rifle_base;
class SFA_X300_Sniper: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(x300): SFA_X300_Sniper {
	scope = 2;
	baseWeapon = QGWEAPON(x300);
	author = AUTHOR;
	displayName = "[ENC] X-300";

	magazines[] = {QGMAGAZINE(x300)};
	magazineWell[] = {QGMAGWELL(x300)};
	//modes[] = {"Single"};
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

