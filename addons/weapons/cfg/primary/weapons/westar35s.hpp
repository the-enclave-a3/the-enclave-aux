class SWLW_rifle_base;
class SWLW_Westar35S: SWLW_rifle_base {
	class Scatter;
	class WeaponSlotsInfo;
};
class GWEAPON(westar35s): SWLW_Westar35S {
	scope = 2;
	baseWeapon = QGWEAPON(westar35s);
	author = AUTHOR;
	displayName = "[ENC] Westar-35S";

	magazines[] = {QGMAGAZINE(westar35s)};
	magazineWell[] = {QGMAGWELL(westar35s)};
	//modes[] = {"Single","close","short","medium"};
	muzzles[] = {"this","Scatter","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class Scatter: Scatter {
		magazines[] = { QGMAGAZINE(westar35s_scatter) };
	};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {"SWLW_Westar35S_scope",RCO_LIST,MRCO_LIST,HOLO_LIST,MRD_LIST};
		};
		class PointerSlot {
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

