class JLTS_Z6;
class MTI_Z6_Small: JLTS_Z6 {
	class WeaponSlotsInfo;
};
class GWEAPON(z6_small): MTI_Z6_Small {
	scope = 2;
	baseWeapon = QGWEAPON(z6_small);
	author = AUTHOR;
	displayName = "[TEA] Z-6";

	magazines[] = {QGMAGAZINE(z6_small)};
	magazineWell[] = {QGMAGWELL(z6_small)};
	//modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
	//muzzles[] = {"this"};

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

