class 3AS_S5_Base_F;
class 3AS_S5_f: 3AS_S5_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(s5): 3AS_S5_f {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] S-5";

	magazines[] = {QGMAGAZINE(s5)};
	magazineWell[] = {QGMAGWELL(enc_s5_magwell)};
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

