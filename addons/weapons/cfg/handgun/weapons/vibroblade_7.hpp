class WBK_Dutch_Vibro;
class acklay_sv: WBK_Dutch_Vibro {
	class WeaponSlotsInfo;
};
class GWEAPON(vibroblade_7): acklay_sv {
	scope = 2;
	baseWeapon = QGWEAPON(vibroblade_7);
	author = AUTHOR;
	displayName = "[ENC] Vibroblade #7";

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

