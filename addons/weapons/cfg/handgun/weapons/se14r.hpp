class 3AS_SE14R_Base_F;
class 3AS_SE14R: 3AS_SE14R_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(se14r): 3AS_SE14R {
	scope = 2;
	baseWeapon = QGWEAPON(se14r);
	author = AUTHOR;
	displayName = "[ENC] SE-14r";

	magazines[] = {QGMAGAZINE(se14r)};
	magazineWell[] = {QGMAGWELL(enc_se14r_magwell)};
	//modes[] = {"Burst"};
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

