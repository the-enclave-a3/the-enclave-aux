class SWLW_rifle_base;
class SWLW_westar35c: SWLW_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(westar35c): SWLW_westar35c {
	scope = 2;
	baseWeapon = QGWEAPON(westar35c);
	author = AUTHOR;
	displayName = "[ENC] Westar-35C";

	magazines[] = {QGMAGAZINE(westar35c)};
	magazineWell[] = {QGMAGWELL(westar35c)};
	//modes[] = {"Single","FullAuto","close","short","medium"};
	muzzles[] = {"this","Stun"};

	class Stun: MTI_Stun_Muzzle {};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

