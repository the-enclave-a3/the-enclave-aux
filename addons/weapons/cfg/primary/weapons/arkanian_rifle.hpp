class SFA_rifle_base;
class SFA_KOTOR_Arkanian_rifle: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(arkanian_rifle): SFA_KOTOR_Arkanian_rifle {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Arkanian Rifle";

	magazines[] = {QGMAGAZINE(arkanian_rifle)};
	magazineWell[] = {QGMAGWELL(enc_arkanian_rifle_magwell)};
	//modes[] = {"Single","Burst","close","short","medium"};
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
