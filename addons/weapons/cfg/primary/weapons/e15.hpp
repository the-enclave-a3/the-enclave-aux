class LMG_Mk200_F;
class SFA_E15: LMG_Mk200_F {
	class WeaponSlotsInfo;
};
class GWEAPON(e15): SFA_E15 {
	scope = 2;
	baseWeapon = QGWEAPON(e15);
	author = AUTHOR;
	displayName = "[ENC] E-15";

	magazines[] = {QGMAGAZINE(e15)};
	magazineWell[] = {QGMAGWELL(e15)};
	//modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
	//muzzles[] = {"this"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
//		class CowsSlot {
			//compatibleItems[] = {};
//		};
//		class PointerSlot {
			//compatibleItems[] = { RAILATTACHMENT_LIST };
//		};
	};
};

