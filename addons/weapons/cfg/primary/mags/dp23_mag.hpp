class JLTS_DP23_mag;
class GMAGAZINE(dp23): JLTS_DP23_mag {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] DP-23 20rnd Magazine #0";
	count = 20;
	//ammo = "MTI_Ammo_DP23";
	ammo = QGAMMO(shotgun);
};

// todo: slugs
class GMAGAZINE(dp23_slug): GMAGAZINE(dp23) {
	scope = 1;
	author = AUTHOR;
	displayName = "[ENC] DP-23 0rnd Magazine #1";
	count = 0;
	//ammo = "";
	ammo = QGAMMO(shotgun);
};

