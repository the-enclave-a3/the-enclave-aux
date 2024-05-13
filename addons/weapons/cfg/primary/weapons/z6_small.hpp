class JLTS_Z6;
class MTI_Z6_Small: JLTS_Z6 {
	class WeaponSlotsInfo;
};
class GWEAPON(z6_small): MTI_Z6_Small {
	scope = 2;
	baseWeapon = QGWEAPON(z6_small);
	author = AUTHOR;
	displayName = "[ENC] Z-6";

	magazines[] = {QGMAGAZINE(z6_small)};
	magazineWell[] = {QGMAGWELL(enc_z6_small_magwell)};
	//modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
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

