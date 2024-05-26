class 3AS_WestarM5_F;
class MTI_WestarM5: 3AS_WestarM5_F {
	class WeaponSlotsInfo;
};
class GWEAPON(westarm5): MTI_WestarM5 {
	scope = 2;
	baseWeapon = QGWEAPON(westarm5);
	author = AUTHOR;
	displayName = "[TEA] Westar-M5";

	magazines[] = {QGMAGAZINE(westarm5)};
	magazineWell[] = {QGMAGWELL(westarm5)};
	//modes[] = {"Single","Burst","FullAuto"};
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

