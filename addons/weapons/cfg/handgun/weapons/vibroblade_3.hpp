class WBK_Dutch_Vibro;
class WBK_SciFi_Sword_5: WBK_Dutch_Vibro {
	class WeaponSlotsInfo;
};
class GWEAPON(vibroblade_3): WBK_SciFi_Sword_5 {
	scope = 2;
	baseWeapon = QGWEAPON(vibroblade_3);
	author = AUTHOR;
	displayName = "[ENC] Vibroblade #3";

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

