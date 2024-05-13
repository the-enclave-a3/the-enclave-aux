class WM_PistolBase;
class WM_SE14C: WM_PistolBase {
	class WeaponSlotsInfo;
};
class GWEAPON(se14c): WM_SE14C {
	scope = 2;
	baseWeapon = QGWEAPON(se14c);
	author = AUTHOR;
	displayName = "[ENC] SE-14c";

	magazines[] = {QGMAGAZINE(se14c)};
	magazineWell[] = {QGMAGWELL(enc_se14c_magwell)};
	//modes[] = {"Single"};
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

