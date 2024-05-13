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
	magazineWell[] = {QGMAGWELL(enc_x300_magwell)};
	//modes[] = {"Single"};
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

