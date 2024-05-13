class SFA_rifle_base;
class SFA_Boltblaster_Carbine2: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_carbine): SFA_Boltblaster_Carbine2 {
	scope = 2;
	baseWeapon = QGWEAPON(boltblaster_carbine);
	author = AUTHOR;
	displayName = "[ENC] Boltblaster Mk2 Carbine";

	magazines[] = {QGMAGAZINE(boltblaster_carbine)};
	magazineWell[] = {QGMAGWELL(enc_boltblaster_carbine_magwell)};
	//modes[] = {"Single","FullAuto","close","short","medium"};
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

