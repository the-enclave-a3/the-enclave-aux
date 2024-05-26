class WBK_Dutch_Vibro;
class WBK_SciFi_Sword_2: WBK_Dutch_Vibro {
	class WeaponSlotsInfo;
};
class GWEAPON(vibroblade_6): WBK_SciFi_Sword_2 {
	scope = 2;
	baseWeapon = QGWEAPON(vibroblade_6);
	author = AUTHOR;
	displayName = "[TEA] Vibroblade #6";

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

