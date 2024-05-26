class GUNIT(base): tgf_undersuit_unit_male {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian";
    uniformClass = QGUNIFORM(base);

    linkedItems[] = {QGHELMET(base_traditional),QGVEST(base_light_armour),QGNVG(base_circuit),"JLTS_clone_comLink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    respawnLinkedItems[] = {QGHELMET(base_traditional),QGVEST(base_light_armour),QGNVG(base_circuit),"JLTS_clone_comLink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(base_seal): tgf_undersuit_unit_male_seal {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] Mandalorian (Seal)";
    uniformClass = QGUNIFORM(base_seal);

    linkedItems[] = {QGHELMET(base_traditional),QGVEST(base_light_armour),QGNVG(base_circuit),"JLTS_clone_comLink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    respawnLinkedItems[] = {QGHELMET(base_traditional),QGVEST(base_light_armour),QGNVG(base_circuit),"JLTS_clone_comLink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

// Colours
MACRO_UNIT(1,blue,Mandalorian (Blue));
MACRO_UNIT_SEAL(1,blue,Mandalorian (Blue));

MACRO_UNIT(1,grey,Mandalorian (Grey));
MACRO_UNIT_SEAL(1,grey,Mandalorian (Grey));

MACRO_UNIT(1,white,Mandalorian (White));
MACRO_UNIT_SEAL(1,white,Mandalorian (White));
