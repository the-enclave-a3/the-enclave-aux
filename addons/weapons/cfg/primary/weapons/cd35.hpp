class SFA_rifle_base;
class SFA_CD35_Sniper: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(cd35): SFA_CD35_Sniper {
	scope = 2;
	baseWeapon = QGWEAPON(cd35);
	author = AUTHOR;
	displayName = "[TEA] CD-35";

	magazines[] = {QGMAGAZINE(cd35)};
	magazineWell[] = {QGMAGWELL(cd35)};
	//modes[] = {"Single"};
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

