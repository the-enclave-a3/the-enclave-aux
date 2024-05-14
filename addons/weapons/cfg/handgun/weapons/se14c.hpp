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
	magazineWell[] = {QGMAGWELL(se14c)};
	//modes[] = {"Single"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};
	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {"WM_SE14C_Scope",MRD_LIST};
		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

