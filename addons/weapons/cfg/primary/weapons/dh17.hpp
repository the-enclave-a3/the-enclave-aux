class arifle_MX_Base_F;
class WM_DH17: arifle_MX_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dh17): WM_DH17 {
	scope = 2;
	baseWeapon = QGWEAPON(dh17);
	author = AUTHOR;
	displayName = "[TEA] DH-17";

	magazines[] = {QGMAGAZINE(dh17)};
	magazineWell[] = {QGMAGWELL(dh17)};
	//modes[] = {"Single"};

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

