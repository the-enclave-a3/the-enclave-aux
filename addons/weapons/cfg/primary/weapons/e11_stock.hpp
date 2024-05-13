class 3AS_E11_Base_F;
class 3AS_E11Stock: 3AS_E11_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(e11_stock): 3AS_E11Stock {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] E-11 (Stock)";

	magazines[] = {QGMAGAZINE(e11_stock)};
	magazineWell[] = {QGMAGWELL(enc_e11_stock_magwell)};
	//modes[] = {"Single","Burst","FullAuto"};
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

