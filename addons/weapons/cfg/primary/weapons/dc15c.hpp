class 3AS_DC15C_F;
class MTI_DC15C: 3AS_DC15C_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15c): MTI_DC15C {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DC-15C";

	magazines[] = {QGMAGAZINE(dc15c)};
	magazineWell[] = {QGMAGWELL(enc_dc15c_magwell)};
	//modes[] = {"FullAuto","Single"};
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

