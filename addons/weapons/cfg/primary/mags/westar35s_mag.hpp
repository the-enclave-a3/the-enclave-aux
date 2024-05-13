class SWLW_Westar35S_Mag;
class GMAGAZINE(westar35s): SWLW_Westar35S_Mag {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Westar-35S 35rnd Magazine";
	count = 35;
	//ammo = "SWLW_ammo_65_yellow";
	ammo = QGAMMO(rifle);
};

class GMAGAZINE(westar35s_scatter): SWLW_Westar35S_Mag {
	scope = 2;
	author = AUTHOR;
	displayName = "[ENC] Westar-35S 15rnd Scatter Magazine";
	displayNameShort = "Scatter";
	count = 15;
	ammo = QGAMMO(shotgun);
};
