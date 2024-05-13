class SWLW_rifle_base;
class SWLW_Westar35S: SWLW_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(westar35s): SWLW_Westar35S {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Westar-35S";

	magazines[] = {QGMAGAZINE(westar35s)};
	magazineWell[] = {QGMAGWELL(enc_westar35s_magwell)};
	//modes[] = {"Single","close","short","medium"};
	//muzzles[] = {"this","Scatter"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

