class SFA_rifle_base;
class SFA_KOTOR_Arkanian_rifle: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(arkanian_rifle): SFA_KOTOR_Arkanian_rifle {
	scope = 2;
	baseWeapon = QGWEAPON(arkanian_rifle);
	author = AUTHOR;
	displayName = "[ENC] Arkanian Rifle";

	magazines[] = {QGMAGAZINE(arkanian_rifle)};
	magazineWell[] = {QGMAGWELL(arkanian_rifle)};
	//modes[] = {"Single","Burst","close","short","medium"};

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

