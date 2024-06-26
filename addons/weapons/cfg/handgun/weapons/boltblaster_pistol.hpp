class Pistol_Base_F;
class SFA_boltblaster_p: Pistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_pistol): SFA_boltblaster_p {
	scope = 2;
	baseWeapon = QGWEAPON(boltblaster_pistol);
	author = AUTHOR;
	displayName = "[TEA] Boltblaster Mk2 Pistol";

	magazines[] = {QGMAGAZINE(boltblaster_pistol)};
	magazineWell[] = {QGMAGWELL(boltblaster_pistol)};
	//modes[] = {"Single","close","short","medium"};
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

