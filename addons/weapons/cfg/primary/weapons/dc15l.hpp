class 3AS_DC15L_F;
class MTI_DC15L: 3AS_DC15L_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15l): MTI_DC15L {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DC-15L";

	magazines[] = {QGMAGAZINE(dc15l)};
	magazineWell[] = {QGMAGWELL(enc_dc15l_magwell)};
	//modes[] = {"FullAuto"};
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

