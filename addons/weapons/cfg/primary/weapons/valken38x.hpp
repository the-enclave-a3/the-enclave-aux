class 3AS_Valken38X_F;
class MTI_Valken38X: 3AS_Valken38X_F {
	class WeaponSlotsInfo;
};
class GWEAPON(valken38x): MTI_Valken38X {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Valken 38X";

	magazines[] = {QGMAGAZINE(valken38x)};
	magazineWell[] = {QGMAGWELL(enc_valken38x_magwell)};
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
