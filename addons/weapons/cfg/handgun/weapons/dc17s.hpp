class JLTS_DC17SA;
class MTI_DC17s: JLTS_DC17SA {
	class WeaponSlotsInfo;
};
class GWEAPON(dc17s): MTI_DC17s {
	scope = 2;
	baseWeapon = QGWEAPON(dc17s);
	author = AUTHOR;
	displayName = "[ENC] DC-17s";

	magazines[] = {QGMAGAZINE(dc17s)};
	magazineWell[] = {QGMAGWELL(dc17s)};
	//modes[] = {"Single"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			compatibleItems[] = { RAILATTACHMENT_LIST,"JLTS_DC17SA_flashlight" };
		};
	};
};

