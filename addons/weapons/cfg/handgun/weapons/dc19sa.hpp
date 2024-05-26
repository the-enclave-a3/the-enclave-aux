class 3AS_pistol_DC15SA_F;
class MTI_DC19SA: 3AS_pistol_DC15SA_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dc19sa): MTI_DC19SA {
	scope = 2;
	baseWeapon = QGWEAPON(dc19sa);
	author = AUTHOR;
	displayName = "[TEA] DC-19s";

	magazines[] = {QGMAGAZINE(dc19sa)};
	magazineWell[] = {QGMAGWELL(dc19sa)};
	//modes[] = {"Single"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
		class MuzzleSlot {};
	};
};

