class SWLW_ACPA;
class MTI_ACPA: SWLW_ACPA {
	class WeaponSlotsInfo;
};
class GWEAPON(acpa): MTI_ACPA {
	scope = 2;
	baseWeapon = QGWEAPON(acpa);
	author = AUTHOR;
	displayName = "[ENC] ACP-A";

	magazines[] = {QGMAGAZINE(acpa)};
	magazineWell[] = {QGMAGWELL(acpa)};
	//modes[] = {"Single","close","short","medium"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
		class PointerSlot {
			MACRO_POINTER_DEFS;
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

