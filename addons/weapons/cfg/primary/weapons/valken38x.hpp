class 3AS_Valken38X_F;
class MTI_Valken38X: 3AS_Valken38X_F {
	class WeaponSlotsInfo;
};
class GWEAPON(valken38x): MTI_Valken38X {
	scope = 2;
	baseWeapon = QGWEAPON(valken38x);
	author = AUTHOR;
	displayName = "[ENC] Valken 38X";

	magazines[] = {QGMAGAZINE(valken38x)};
	magazineWell[] = {QGMAGWELL(valken38x)};
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

