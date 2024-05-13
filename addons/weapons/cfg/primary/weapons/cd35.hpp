class SFA_rifle_base;
class SFA_CD35_Sniper: SFA_rifle_base {
	class WeaponSlotsInfo;
};
class GWEAPON(cd35): SFA_CD35_Sniper {
	scope = 2;
	baseWeapon = QGWEAPON(cd35);
	author = AUTHOR;
	displayName = "[ENC] CD-35";

	magazines[] = {QGMAGAZINE(cd35)};
	magazineWell[] = {QGMAGWELL(enc_cd35_magwell)};
	//modes[] = {"Single"};
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

