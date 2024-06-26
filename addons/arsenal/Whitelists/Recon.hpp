class Attachments: Attachments {
    MACRO_WHITELIST(MTI_Verpine_scope);
    MACRO_WHITELIST(3AS_Imp_Optic_DLT19x);
    MACRO_WHITELIST(3AS_Bipod_VK38X_f);
};

class Backpacks: Backpacks {};

class Goggles: Goggles {};

class Headgear: Headgear {};

class Items: Items {
    MACRO_WHITELIST(I_UavTerminal);
    MACRO_WHITELIST(ACE_artilleryTable);
    MACRO_WHITELIST(EGVAR(drones,prowler_packed));
    MACRO_WHITELIST(ACE_HuntIR_monitor);
    MACRO_WHITELIST(ACE_UAVBattery);
    MACRO_WHITELIST(MTI_HuntIRHandheld);
};

class Magazines: Magazines {
    // Primary
    MACRO_WHITELIST(GMAGAZINE(verpine));
    MACRO_WHITELIST(GMAGAZINE(verpine_apds));
    MACRO_WHITELIST(GMAGAZINE(verpine_ion));
    MACRO_WHITELIST(GMAGAZINE(verpine_ai_deraformine));
    MACRO_WHITELIST(GMAGAZINE(verpine_ai_latheniol));
    MACRO_WHITELIST(GMAGAZINE(verpine_tracking));
    MACRO_WHITELIST(GMAGAZINE(verpine_acid));
    MACRO_WHITELIST(GMAGAZINE(dlt19x));
    MACRO_WHITELIST(GMAGAZINE(dc15x));
    MACRO_WHITELIST(GMAGAZINE(dc15x_stun));
    MACRO_WHITELIST(GMAGAZINE(dc15x_ai_deraformine));
    MACRO_WHITELIST(GMAGAZINE(dc15x_ai_latheniol));

    // Handgun
    MACRO_WHITELIST(GMAGAZINE(dc19sa));

    // Launcher
    MACRO_WHITELIST(MTI_1Rnd_Mortar_HE);
    MACRO_WHITELIST(MTI_1Rnd_Mortar_Smoke);
    MACRO_WHITELIST(MTI_1Rnd_Mortar_Smoke_Red);
    MACRO_WHITELIST(MTI_1Rnd_Mortar_Illum);
    MACRO_WHITELIST(MTI_1Rnd_Mortar_Guided);
    MACRO_WHITELIST(MTI_1Rnd_Mortar_LG);
    MACRO_WHITELIST(MTI_1Rnd_Mortar_Smoke_Halothane);

    MACRO_WHITELIST(mti_mortar_turret_he_mag);
    MACRO_WHITELIST(mti_mortar_turret_ranging_mag);
    MACRO_WHITELIST(mti_mortar_turret_he_airburst_mag);
    MACRO_WHITELIST(mti_mortar_turret_smoke_mag);
    MACRO_WHITELIST(mti_mortar_turret_mine_mag);
    MACRO_WHITELIST(mti_mortar_turret_flare_mag);
    MACRO_WHITELIST(mti_mortar_turret_flare_ir_mag);
};

class Uniforms: Uniforms {};

class Vests: Vests {};

class Weapons: Weapons {
    // Primary
    MACRO_WHITELIST(GWEAPON(verpine));
    MACRO_WHITELIST(GWEAPON(dlt19x));
    MACRO_WHITELIST(GWEAPON(dc15x));

    // Handgun
    MACRO_WHITELIST(GWEAPON(dc19sa));

    // Launcher
    MACRO_WHITELIST(MTI_Mortar_Carry);
    MACRO_WHITELIST(EGVAR(drones,adbm9_tube));
    MACRO_WHITELIST(mti_mortar_turret_carry_tripod);

    // BCSE
    MACRO_WHITELIST(GWEAPON(verpine_bcsewpn));
    MACRO_WHITELIST(GWEAPON(dlt19x_bcsewpn));
    MACRO_WHITELIST(GWEAPON(dc15x_bcsewpn));
};
