class 3AS_pistol_DC15SA_F;
class MTI_DC15SA: 3AS_pistol_DC15SA_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15sa): MTI_DC15SA {
	scope = 2;
	baseWeapon = QGWEAPON(dc15sa);
	author = AUTHOR;
	displayName = "[ENC] DC-15s";

	magazines[] = {QGMAGAZINE(dc15sa)};
	magazineWell[] = {QGMAGWELL(dc15sa)};
	//modes[] = {"Single"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
		class MuzzleSlot {};
	};
};

