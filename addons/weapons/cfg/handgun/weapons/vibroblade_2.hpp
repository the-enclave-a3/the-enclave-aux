class WBK_Dutch_Vibro;
class WBK_SciFi_Sword_4: WBK_Dutch_Vibro {
	class WeaponSlotsInfo;
};
class GWEAPON(vibroblade_2): WBK_SciFi_Sword_4 {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Vibroblade #2";

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

