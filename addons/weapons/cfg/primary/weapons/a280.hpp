class arifle_MX_Base_F;
class WM_A280: arifle_MX_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(a280): WM_A280 {
	scope = 2;
	baseWeapon = QGWEAPON(a280);
	author = AUTHOR;
	displayName = "[TEA] A-280";

	magazines[] = {QGMAGAZINE(a280)};
	magazineWell[] = {QGMAGWELL(a280)};
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

