class 3AS_WestarM5_F;
class MTI_WestarM5: 3AS_WestarM5_F {
	class WeaponSlotsInfo;
};
class GWEAPON(westarm5): MTI_WestarM5 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Westar-M5";

	magazines[] = {QGMAGAZINE(westarm5)};
	magazineWell[] = {QGMAGWELL(enc_westarm5_magwell)};
	//modes[] = {"Single","Burst","FullAuto"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

