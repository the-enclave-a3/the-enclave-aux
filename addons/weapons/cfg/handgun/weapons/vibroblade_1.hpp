class Pistol_Base_F;
class DpSword: Pistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(vibroblade_1): DpSword {
	scope = 2;
	baseWeapon = QGWEAPON(vibroblade_1);
	author = AUTHOR;
	displayName = "[ENC] Vibroblade #1";

	magazines[] = {"WBK_Cybercrystal"};
	//modes[] = {"Single"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

