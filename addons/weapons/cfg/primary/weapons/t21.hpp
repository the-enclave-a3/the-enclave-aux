class arifle_MX_Base_F;
class WM_T21: arifle_MX_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(t21): WM_T21 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] T-21";

	magazines[] = {QGMAGAZINE(t21)};
	magazineWell[] = {QGMAGWELL(enc_t21_magwell)};
	//modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

