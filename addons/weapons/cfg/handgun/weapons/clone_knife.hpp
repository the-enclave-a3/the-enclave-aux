class mti_clone_knife_base;
class mti_clone_knife: mti_clone_knife_base {
	class WeaponSlotsInfo;
};
class GWEAPON(clone_knife): mti_clone_knife {
	scope = 2;
	baseWeapon = QGWEAPON(clone_knife);
	author = AUTHOR;
	displayName = "[ENC] Clone Knife";

	magazines[] = {"WBK_Cybercrystal"};
	//modes[] = {"Single"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			MACRO_COWS_DEFS;
			compatibleItems[] = {};
		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
		class MuzzleSlot {};
	};
};

