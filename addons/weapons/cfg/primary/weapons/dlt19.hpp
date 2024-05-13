class 3AS_DLT19_Base_F;
class 3AS_DLT19: 3AS_DLT19_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dlt19): 3AS_DLT19 {
	scope = 2;
	baseWeapon = QGWEAPON(dlt19);
	author = AUTHOR;
	displayName = "[ENC] DLT-19";

	magazines[] = {QGMAGAZINE(dlt19)};
	magazineWell[] = {QGMAGWELL(enc_dlt19_magwell)};
	//modes[] = {"Single","FullAuto"};
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

