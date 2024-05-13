class 3AS_DymekBlasterPistol_Base_F;
class DymekBlasterPistol_F: 3AS_DymekBlasterPistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dymek_pistol): DymekBlasterPistol_F {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Dymek Pistol";

	magazines[] = {QGMAGAZINE(dymek_pistol)};
	magazineWell[] = {QGMAGWELL(enc_dymek_pistol_magwell)};
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

