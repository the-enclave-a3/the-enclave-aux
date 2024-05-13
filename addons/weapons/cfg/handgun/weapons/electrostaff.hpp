class ls_weapon_melee_base;
class ls_weapon_electrostaff_melee: ls_weapon_melee_base {
	class WeaponSlotsInfo;
};
class GWEAPON(electrostaff): ls_weapon_electrostaff_melee {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Electrostaff";

	magazines[] = {QGMAGAZINE(electrostaff)};
	magazineWell[] = {QGMAGWELL(enc_electrostaff_magwell)};
	//modes[] = {"Single"};
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

