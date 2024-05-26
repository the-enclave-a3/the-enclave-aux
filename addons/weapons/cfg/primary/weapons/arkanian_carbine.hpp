class SFA_rifle_base;
class SFA_KOTOR_Arkanian_C: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(arkanian_carbine): SFA_KOTOR_Arkanian_C {
	scope = 2;
	baseWeapon = QGWEAPON(arkanian_carbine);
	author = AUTHOR;
	displayName = "[TEA] Arkanian Carbine";

	magazines[] = {QGMAGAZINE(arkanian_carbine)};
	magazineWell[] = {QGMAGWELL(arkanian_carbine)};
	//modes[] = {"Single","Burst","close","short","medium"};
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

