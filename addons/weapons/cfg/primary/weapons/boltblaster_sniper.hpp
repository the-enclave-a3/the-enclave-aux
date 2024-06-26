class SFA_rifle_base;
class SFA_Boltblaster_Sniper: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_sniper): SFA_Boltblaster_Sniper {
	scope = 2;
	baseWeapon = QGWEAPON(boltblaster_sniper);
	author = AUTHOR;
	displayName = "[TEA] Boltblaster Mk2 Sniper";

	magazines[] = {QGMAGAZINE(boltblaster_sniper)};
	magazineWell[] = {QGMAGWELL(boltblaster_sniper)};
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

