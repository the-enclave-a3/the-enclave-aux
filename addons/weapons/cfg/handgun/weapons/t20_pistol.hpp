class Pistol_Base_F;
class SFA_T20_p: Pistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(t20_pistol): SFA_T20_p {
	scope = 2;
	baseWeapon = QGWEAPON(t20_pistol);
	author = AUTHOR;
	displayName = "[ENC] T-20 Pistol";

	magazines[] = {QGMAGAZINE(t20_pistol)};
	magazineWell[] = {QGMAGWELL(enc_t20_pistol_magwell)};
	//modes[] = {"Single","close","short","medium"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};
	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

