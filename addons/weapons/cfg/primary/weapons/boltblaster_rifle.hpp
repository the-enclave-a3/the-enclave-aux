class SFA_rifle_base;
class SFA_Boltblaster_rifle: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_rifle): SFA_Boltblaster_rifle {
	scope = 2;
	baseWeapon = QGWEAPON(boltblaster_rifle);
	author = AUTHOR;
	displayName = "[TEA] Boltblaster Mk2 Rifle";

	magazines[] = {QGMAGAZINE(boltblaster_rifle)};
	magazineWell[] = {QGMAGWELL(boltblaster_rifle)};
	//modes[] = {"Single","Burst","close","short","medium"};
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

