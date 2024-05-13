class 3AS_RPS6_Base;
class MTI_RPS6_D: 3AS_RPS6_Base {
	class WeaponSlotsInfo;
};
class GWEAPON(rps6_d): MTI_RPS6_D {
	scope = 1;
	author = AUTHOR;
	displayName = "[ENC] RPS-6 Disposable";

	magazines[] = {QGMAGAZINE(rps6_d)};
};

class GWEAPON(rps6_d_loaded) : GWEAPON(rps6_d) {
	scope = 2;

	author = AUTHOR;
    displayName = "[ENC] RPS-6 (Disposable)";
	magazines[] = {"CBA_FakeLauncherMagazine"};

    class WeaponSlotsInfo: WeaponSlotsInfo {
		mass = 100;
	};
};

class GWEAPON(rps6_d_used): GWEAPON(rps6_d) {
	author = AUTHOR;
    displayName = "[ENC] RPS-6 (Disposable, Used)";
	magazines[] = {"CBA_FakeLauncherMagazine"};
};
