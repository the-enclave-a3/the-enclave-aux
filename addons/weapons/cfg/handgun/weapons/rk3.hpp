class 3AS_RK3_Base_F;
class 3AS_RK3: 3AS_RK3_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(rk3): 3AS_RK3 {
	scope = 2;
	baseWeapon = QGWEAPON(rk3);
	author = AUTHOR;
	displayName = "[ENC] RK-3";

	magazines[] = {QGMAGAZINE(rk3)};
	magazineWell[] = {QGMAGWELL(enc_rk3_magwell)};
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

