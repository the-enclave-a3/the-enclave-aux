class JLTS_DW32S;
class MTI_DW32S: JLTS_DW32S {
	class WeaponSlotsInfo;
};
class GWEAPON(dw32s): MTI_DW32S {
	scope = 2;
	baseWeapon = QGWEAPON(dw32s);
	author = AUTHOR;
	displayName = "[ENC] DW-32S";

	magazines[] = {QGMAGAZINE(dw32s)};
	magazineWell[] = {QGMAGWELL(dw32s)};
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

