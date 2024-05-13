class SFA_rifle_base;
class SFA_Boltblaster_rifle: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_rifle): SFA_Boltblaster_rifle {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Boltblaster Mk2 Rifle";

	magazines[] = {QGMAGAZINE(boltblaster_rifle)};
	magazineWell[] = {QGMAGWELL(enc_boltblaster_rifle_magwell)};
	//modes[] = {"Single","Burst","close","short","medium"};
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

