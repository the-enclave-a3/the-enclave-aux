class WBK_Dutch_Vibro;
class SFA_Vibroblade: WBK_Dutch_Vibro {
	class WeaponSlotsInfo;
};
class GWEAPON(vibroblade_4): SFA_Vibroblade {
	scope = 2;
	baseWeapon = QGWEAPON(vibroblade_4);
	author = AUTHOR;
	displayName = "[TEA] Vibroblade #4";

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

