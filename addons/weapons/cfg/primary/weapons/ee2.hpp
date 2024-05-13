class srifle_DMR_04_F;
class MTI_EE2: srifle_DMR_04_F {
	class WeaponSlotsInfo;
};
class GWEAPON(ee2): MTI_EE2 {
	scope = 2;
	baseWeapon = QGWEAPON(ee2);
	author = AUTHOR;
	displayName = "[ENC] EE-2";

	magazines[] = {QGMAGAZINE(ee2)};
	magazineWell[] = {QGMAGWELL(enc_ee2_magwell)};
	//modes[] = {"Burst","Single"};
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

