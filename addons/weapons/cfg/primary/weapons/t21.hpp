class arifle_MX_Base_F;
class WM_T21: arifle_MX_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(t21): WM_T21 {
	scope = 2;
	baseWeapon = QGWEAPON(t21);
	author = AUTHOR;
	displayName = "[TEA] T-21";

	magazines[] = {QGMAGAZINE(t21)};
	magazineWell[] = {QGMAGWELL(t21)};
	//modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

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

