class 3AS_S5_Base_F;
class 3AS_S5_f: 3AS_S5_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(s5): 3AS_S5_f {
	scope = 2;
	baseWeapon = QGWEAPON(s5);
	author = AUTHOR;
	displayName = "[TEA] S-5";

	magazines[] = {QGMAGAZINE(s5)};
	magazineWell[] = {QGMAGWELL(s5)};
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

