class 3AS_Chaingun;
class MTI_Z6: 3AS_Chaingun {
	class WeaponSlotsInfo;
};
class GWEAPON(z6): MTI_Z6 {
	scope = 2;
	baseWeapon = QGWEAPON(z6);
	author = AUTHOR;
	displayName = "[TEA] Z-6";

	magazines[] = {QGMAGAZINE(z6)};
	magazineWell[] = {QGMAGWELL(z6)};
	//modes[] = {"FullAuto"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

