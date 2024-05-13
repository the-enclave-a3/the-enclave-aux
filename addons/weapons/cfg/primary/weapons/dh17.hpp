class arifle_MX_Base_F;
class WM_DH17: arifle_MX_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dh17): WM_DH17 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DH-17";

	magazines[] = {QGMAGAZINE(dh17)};
	magazineWell[] = {QGMAGWELL(enc_dh17_magwell)};
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

