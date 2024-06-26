class Pistol_Base_F;
class SFA_T20_p: Pistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(t20_pistol): SFA_T20_p {
	scope = 2;
	baseWeapon = QGWEAPON(t20_pistol);
	author = AUTHOR;
	displayName = "[TEA] T-20 Pistol";

	magazines[] = {QGMAGAZINE(t20_pistol)};
	magazineWell[] = {QGMAGWELL(t20_pistol)};
	//modes[] = {"Single","close","short","medium"};
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

