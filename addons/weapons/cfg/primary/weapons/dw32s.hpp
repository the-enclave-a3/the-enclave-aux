class JLTS_DW32S;
class MTI_DW32S: JLTS_DW32S {
	class WeaponSlotsInfo;
};
class GWEAPON(dw32s): MTI_DW32S {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DW-32S";

	magazines[] = {QGMAGAZINE(dw32s)};
	magazineWell[] = {QGMAGWELL(enc_dw32s_magwell)};
	//modes[] = {"Single"};
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

