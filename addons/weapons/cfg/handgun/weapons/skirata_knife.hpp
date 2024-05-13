class Pistol_Base_F;
class LFP_Skirata_Knife: Pistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(skirata_knife): LFP_Skirata_Knife {
	scope = 2;
	baseWeapon = QGWEAPON(skirata_knife);
	author = AUTHOR;
	displayName = "[ENC] Skirata Knife";

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

