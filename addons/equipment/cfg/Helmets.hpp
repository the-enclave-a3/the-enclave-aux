class GHELMET(base_heavy): tgf_helmets_heavy {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Heavy Mandalorian Helmet";
};

class GHELMET(base_battle_master): tgf_helmets_battle_master {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Battlemaster Helmet";
};

class GHELMET(base_viper): tgf_helmets_viper {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Viper Helmet";
};

class GHELMET(base_viper_vet): tgf_helmets_viper_vet {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Viper Helmet (Veteran)";
};

class GHELMET(base_warlord): tgf_helmets_warlord {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Warlord Helmet";
};

class GHELMET(base_traditional): tgf_helmets_traditional {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Traditional Mandalorian Helmet";
};

class GHELMET(base_veteran): tgf_helmets_veteran {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Veteran Mandalorian Helmet";
};

// Foundling
MACRO_HELMET(2,foundling,Foundling Helmet,traditional);

// Mando'ad
MACRO_HELMET(2,mandoad_battle_master,Mando'ad Battlemaster Helmet,battle_master);
MACRO_HELMET(2,mandoad_heavy,Heavy Mando'ad Helmet,heavy);
MACRO_HELMET(2,mandoad_traditional,Traditional Mando'ad Helmet,traditional);
MACRO_HELMET(2,mandoad_veteran,Mando'ad Veteran Helmet,veteran);
MACRO_HELMET(2,mandoad_viper,Mando'ad Viper Helmet,viper);
MACRO_HELMET(2,mandoad_viper_veteran,Mando'ad Viper Helmet (Veteran),viper_vet);
MACRO_HELMET(2,mandoad_warlord,Mando'ad Warlord Helmet,warlord);

// Arbiter
class GHELMET(arbiter): tgf_helmets_arbiter {
    scope = 2;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian Arbiter Helmet";

    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arbiter\camo1_co.paa),
        "\z\tgf\addons\helmets\arbiter\data\camo2_co.paa"
    };
};
