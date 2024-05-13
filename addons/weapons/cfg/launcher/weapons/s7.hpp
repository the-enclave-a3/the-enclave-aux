class launch_Titan_base;
class SFA_Guided_Onslaught_Launcher: launch_Titan_base {
	class WeaponSlotsInfo;
};
class GWEAPON(s7): SFA_Guided_Onslaught_Launcher {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] S-7";

	magazines[] = {QGMAGAZINE(s7)};
	magazineWell[] = {QGMAGWELL(enc_s7_magwell)};
	//modes[] = {"Single","TopDown"};
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

