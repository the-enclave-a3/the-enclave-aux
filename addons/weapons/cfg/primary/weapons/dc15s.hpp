class JLTS_DC15S;
class MTI_DC15S: JLTS_DC15S {
	class WeaponSlotsInfo;
};
class GWEAPON(dc15s): MTI_DC15S {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DC-15S";

	magazines[] = {QGMAGAZINE(dc15s)};
	magazineWell[] = {QGMAGWELL(enc_dc15s_magwell)};
	//modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
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

