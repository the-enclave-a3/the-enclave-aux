class JLTS_DC15A_plastic;
class MTI_DC15A: JLTS_DC15A_plastic {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15a): MTI_DC15A {
	scope = 2;
	baseWeapon = QGWEAPON(dc15a);
	author = AUTHOR;
	displayName = "[TEA] DC-15A";

	magazines[] = {QGMAGAZINE(dc15a)};
	magazineWell[] = {QGMAGWELL(dc15a)};
	//modes[] = {"Single","Burst"};
	//muzzles[] = {"this","Stun"};

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

