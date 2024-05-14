class WM_PistolBase;
class WM_EC17: WM_PistolBase {
	class WeaponSlotsInfo;
};
class GWEAPON(ec17): WM_EC17 {
	scope = 2;
	baseWeapon = QGWEAPON(ec17);
	author = AUTHOR;
	displayName = "[ENC] EC-17";

	magazines[] = {QGMAGAZINE(ec17)};
	magazineWell[] = {QGMAGWELL(ec17)};
	//modes[] = {"Single"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};
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

