class LMG_Mk200_F;
class SFA_EL34: LMG_Mk200_F {
	class WeaponSlotsInfo;
};
class GWEAPON(el34): SFA_EL34 {
	scope = 2;
	baseWeapon = QGWEAPON(el34);
	author = AUTHOR;
	displayName = "[ENC] EL-34";

	magazines[] = {QGMAGAZINE(el34)};
	magazineWell[] = {QGMAGWELL(enc_el34_magwell)};
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

