class GVEST(base_heavy_armour): tgf_armour_heavy_armour {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Heavy Mandalorian Armour";
};

class GVEST(base_battle_armour): tgf_armour_battle_armour {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Battle Armour";
};

class GVEST(base_super_light_armour): tgf_armour_super_light_armour {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Recon Armour";
};

class GVEST(base_medium_armour): tgf_armour_medium_armour {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Medium Mandalorian Armour";
};

class GVEST(base_light_armour): tgf_armour_light_armour {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Traditional Mandalorian Armour";
};

// Foundling
MACRO_VEST(2,foundling,Foundling Armour,super_light_armour);

// Mando'ad
MACRO_VEST(2,mandoad_battle,Mando'ad Battle Armour,battle_armour);
MACRO_VEST(2,mandoad_heavy,Heavy Mando'ad Armour,heavy_armour);
MACRO_VEST(2,mandoad_medium,Medium Mando'ad Armour,medium_armour);
MACRO_VEST(2,mandoad_recon,Mando'ad Recon Armour,super_light_armour);
MACRO_VEST(2,mandoad_traditional,Traditional Mando'ad Armour,light_armour);

// Arbiter
class GVEST(arbiter_armour): tgf_armour_arbiter_armour {
    scope = 2;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Arbiter Armour";

    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\arbiter\camo1_co.paa),
        QPATHTOF(data\vests\arbiter\camo2_co.paa)
    };
};
