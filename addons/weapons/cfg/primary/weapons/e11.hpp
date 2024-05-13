class 3AS_E11_Base_F;
class 3AS_E11: 3AS_E11_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(e11): 3AS_E11 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] E-11";

	magazines[] = {QGMAGAZINE(e11)};
	magazineWell[] = {QGMAGWELL(enc_e11_magwell)};
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

