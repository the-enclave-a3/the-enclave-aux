class WM_PistolBase;
class WM_EC17: WM_PistolBase {
	class WeaponSlotsInfo;
};
class GWEAPON(ec17): WM_EC17 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] EC-17";

	magazines[] = {QGMAGAZINE(ec17)};
	magazineWell[] = {QGMAGWELL(enc_ec17_magwell)};
	//modes[] = {"Single"};
	//muzzles[] = {"This"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

