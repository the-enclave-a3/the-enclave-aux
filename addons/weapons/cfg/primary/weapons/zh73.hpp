class SWLW_ZH73;
class MTI_ZH73: SWLW_ZH73 {
	class WeaponSlotsInfo;
};
class GWEAPON(zh73): MTI_ZH73 {
	scope = 2;
	baseWeapon = QGWEAPON(zh73);
	author = AUTHOR;
	displayName = "[TEA] ZH-73";

	magazines[] = {QGMAGAZINE(zh73)};
	magazineWell[] = {QGMAGWELL(zh73)};
	//modes[] = {"Single","FullAuto"};
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

