class 3AS_DymekBlasterPistol_Base_F;
class DymekBlasterPistol_F: 3AS_DymekBlasterPistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(dymek_pistol): DymekBlasterPistol_F {
	scope = 2;
	baseWeapon = QGWEAPON(dymek_pistol);
	author = AUTHOR;
	displayName = "[ENC] Dymek Pistol";

	magazines[] = {QGMAGAZINE(dymek_pistol)};
	magazineWell[] = {QGMAGWELL(enc_dymek_pistol_magwell)};
	//modes[] = {"Single"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};
	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

