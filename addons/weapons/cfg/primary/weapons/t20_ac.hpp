class LMG_Mk200_F;
class SFA_T20_AC: LMG_Mk200_F {
	class WeaponSlotsInfo;
};
class GWEAPON(t20_ac): SFA_T20_AC {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] T-20 Assault Cannon";

	magazines[] = {QGMAGAZINE(t20_ac)};
	magazineWell[] = {QGMAGWELL(enc_t20_ac_magwell)};
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
