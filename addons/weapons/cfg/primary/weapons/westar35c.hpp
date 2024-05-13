class SWLW_rifle_base;
class SWLW_westar35c: SWLW_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(westar35c): SWLW_westar35c {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Westar-35C";

	magazines[] = {QGMAGAZINE(westar35c)};
	magazineWell[] = {QGMAGWELL(enc_westar35c_magwell)};
	//modes[] = {"Single","FullAuto","close","short","medium"};
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

