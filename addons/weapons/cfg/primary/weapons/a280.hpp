class arifle_MX_Base_F;
class WM_A280: arifle_MX_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(a280): WM_A280 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] A-280";

	magazines[] = {QGMAGAZINE(a280)};
	magazineWell[] = {QGMAGWELL(enc_a280_magwell)};
	//modes[] = {"Single"};
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

