class hgun_Pistol_heavy_02_F;
class SFA_D200: hgun_Pistol_heavy_02_F {
	class WeaponSlotsInfo;
};
class GWEAPON(d200): SFA_D200 {
	scope = 2;
	baseWeapon = QGWEAPON(d200);
	author = AUTHOR;
	displayName = "[ENC] D-200";

	magazines[] = {QGMAGAZINE(d200)};
	magazineWell[] = {QGMAGWELL(enc_d200_magwell)};
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

