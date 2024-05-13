class ls_weapon_melee_base;
class ls_weapon_electrostaff_melee: ls_weapon_melee_base {
	class WeaponSlotsInfo;
};
class GWEAPON(electrostaff): ls_weapon_electrostaff_melee {
	scope = 2;
	baseWeapon = QGWEAPON(electrostaff);
	author = AUTHOR;
	displayName = "[ENC] Electrostaff";

	magazines[] = {};
	magazineWell[] = {};
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

