class SFA_rifle_base;
class SFA_Boltblaster_Carbine2: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_carbine): SFA_Boltblaster_Carbine2 {
	scope = 2;
	baseWeapon = QGWEAPON(boltblaster_carbine);
	author = AUTHOR;
	displayName = "[TEA] Boltblaster Mk2 Carbine";

	magazines[] = {QGMAGAZINE(boltblaster_carbine)};
	magazineWell[] = {QGMAGWELL(boltblaster_carbine)};
	//modes[] = {"Single","FullAuto","close","short","medium"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {"SFA_Holosight_blue",RCO_LIST,MRCO_LIST,HOLO_LIST,MRD_LIST};
		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

