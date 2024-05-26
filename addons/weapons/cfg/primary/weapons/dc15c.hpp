class 3AS_DC15C_F;
class MTI_DC15C: 3AS_DC15C_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15c): MTI_DC15C {
	scope = 2;
	baseWeapon = QGWEAPON(dc15c);
	author = AUTHOR;
	displayName = "[TEA] DC-15C";

	magazines[] = {QGMAGAZINE(dc15c)};
	magazineWell[] = {QGMAGWELL(dc15c)};
	//modes[] = {"FullAuto","Single"};
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

