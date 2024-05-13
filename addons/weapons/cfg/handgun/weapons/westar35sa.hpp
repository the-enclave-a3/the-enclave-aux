class Pistol_Base_F;
class SWLW_Westar35SA: Pistol_Base_F {
	class WeaponSlotsInfo;
};
class GWEAPON(westar35sa): SWLW_Westar35SA {
	scope = 2;
	baseWeapon = QGWEAPON(westar35sa);
	author = AUTHOR;
	displayName = "[ENC] Westar-35s";

	magazines[] = {QGMAGAZINE(westar35sa)};
	magazineWell[] = {QGMAGWELL(enc_westar35sa_magwell)};
	//modes[] = {"Single","close","short","medium"};
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

