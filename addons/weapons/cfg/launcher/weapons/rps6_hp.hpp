class launch_NLAW_F;
class MTI_RPS6_HP: launch_NLAW_F {
	class WeaponSlotsInfo;
};
class GWEAPON(rps6_hp): MTI_RPS6_HP {
	scope = 2;
	baseWeapon = QGWEAPON(rps6_hp);
	author = AUTHOR;
	displayName = "[ENC] RPS-6 Heavy Projectile";

	magazines[] = {QGMAGAZINE(rps6_hp_at),QGMAGAZINE(rps6_hp_aa)};
	magazineWell[] = {QGMAGWELL(rps6_hp)};
	//modes[] = {"Single","Overfly"};
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

