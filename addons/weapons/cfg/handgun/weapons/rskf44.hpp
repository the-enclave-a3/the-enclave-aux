class MTI_RSKF44_base;
class MTI_RSKF44: MTI_RSKF44_base {
	class WeaponSlotsInfo;
};
class GWEAPON(rskf44): MTI_RSKF44 {
	scope = 2;
	baseWeapon = QGWEAPON(rskf44);
	author = AUTHOR;
	displayName = "[ENC] RSKF-44";

	magazines[] = {QGMAGAZINE(rskf44)};
	magazineWell[] = {QGMAGWELL(enc_rskf44_magwell)};
	//modes[] = {"Single"};
	//muzzles[] = {"this","Stun"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot {
			//compatibleItems[] = {};
		};
		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
		};
	};
};

