class JLTS_DC15S;
class MTI_DC15S: JLTS_DC15S {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15s): MTI_DC15S {
	scope = 2;
	baseWeapon = QGWEAPON(dc15s);
	author = AUTHOR;
	displayName = "[ENC] DC-15S";

	magazines[] = {QGMAGAZINE(dc15s)};
	magazineWell[] = {QGMAGWELL(dc15s)};
	//modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

