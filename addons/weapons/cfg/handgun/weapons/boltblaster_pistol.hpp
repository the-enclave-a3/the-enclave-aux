class Pistol_Base_F;
class SFA_boltblaster_p: Pistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(boltblaster_pistol): SFA_boltblaster_p {
	scope = 2;
	baseWeapon = QGWEAPON(boltblaster_pistol);
	author = AUTHOR;
	displayName = "[ENC] Boltblaster Mk2 Pistol";

	magazines[] = {QGMAGAZINE(boltblaster_pistol)};
	magazineWell[] = {QGMAGWELL(enc_boltblaster_pistol_magwell)};
	//modes[] = {"Single","close","short","medium"};
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

