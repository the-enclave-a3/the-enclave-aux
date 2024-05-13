class SFA_rifle_base;
class SFA_Boltblaster_Sniper: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_sniper): SFA_Boltblaster_Sniper {
	scope = 2;
	baseWeapon = QGWEAPON(boltblaster_sniper);
	author = AUTHOR;
	displayName = "[ENC] Boltblaster Mk2 Sniper";

	magazines[] = {QGMAGAZINE(boltblaster_sniper)};
	magazineWell[] = {QGMAGWELL(enc_boltblaster_sniper_magwell)};
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

