class SWLW_ZH73;
class MTI_ZH73: SWLW_ZH73 {
	class WeaponSlotsInfo;
};
class GWEAPON(zh73): MTI_ZH73 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] ZH-73";

	magazines[] = {QGMAGAZINE(zh73)};
	magazineWell[] = {QGMAGWELL(enc_zh73_magwell)};
	//modes[] = {"Single","FullAuto"};
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

