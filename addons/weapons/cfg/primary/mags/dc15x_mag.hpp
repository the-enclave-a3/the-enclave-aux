class MTI_DC15X_mag;
class GMAGAZINE(dc15x): MTI_DC15X_mag {
	scope = 2;
	author = AUTHOR;
	displayName = "[TEA] DC-15X 15rnd Magazine";
	count = 15;
	//ammo = "MTI_bullet_sniper_blue";
	ammo = QGAMMO(sniper);
};

class MTI_DC15X_mag_tranq;
class GMAGAZINE(dc15x_stun): MTI_DC15X_mag_tranq {
	scope = 2;
	author = AUTHOR;
	displayName = "[TEA] DC-15X 15rnd Stun Magazine";
	count = 15;
	//ammo = "ls_ammo_stun";
	ammo = "MTI_stun_ammo";
};

class MTI_DC15X_mag_Deraformine;
class GMAGAZINE(dc15x_ai_deraformine): MTI_DC15X_mag_Deraformine {
	scope = 2;
	author = AUTHOR;
	displayName = "[TEA] DC-15X 1rnd Deraformine A-I";
	count = 1;
	//ammo = "MTI_15x_ammo_ai_deraformine";
};

class MTI_DC15X_mag_Latheniol;
class GMAGAZINE(dc15x_ai_latheniol): MTI_DC15X_mag_Latheniol {
	scope = 2;
	author = AUTHOR;
	displayName = "[TEA] DC-15X 1rnd Latheniol A-I";
	count = 1;
	//ammo = "MTI_15x_ammo_ai_latheniol";
};

