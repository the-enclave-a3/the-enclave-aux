class 3AS_DymekBlasterPistol_Base_F;
class DymekBlasterPistol_F: 3AS_DymekBlasterPistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dymek_pistol): DymekBlasterPistol_F {
	scope = 2;
	baseWeapon = QGWEAPON(dymek_pistol);
	author = AUTHOR;
	displayName = "[TEA] Dymek Pistol";

	magazines[] = {QGMAGAZINE(dymek_pistol)};
	magazineWell[] = {QGMAGWELL(dymek_pistol)};
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

