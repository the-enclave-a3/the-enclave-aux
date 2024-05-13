class arifle_MX_Base_F;
class WM_A280: arifle_MX_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(a280): WM_A280 {
	scope = 2;
	baseWeapon = QGWEAPON(a280);
	author = AUTHOR;
	displayName = "[ENC] A-280";

	magazines[] = {QGMAGAZINE(a280)};
	magazineWell[] = {QGMAGWELL(a280)};
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

