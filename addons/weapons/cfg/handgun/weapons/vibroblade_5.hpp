class WBK_Dutch_Vibro;
class WBK_SciFi_Sword_1: WBK_Dutch_Vibro {
	class WeaponSlotsInfo;
};
class GWEAPON(vibroblade_5): WBK_SciFi_Sword_1 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Vibroblade #5";

	magazines[] = {"WBK_Cybercrystal"};
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

