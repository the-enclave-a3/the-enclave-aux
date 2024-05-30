class GBACKPACK(base_JT12): tgf_backpacks_JT12 {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] JT-12 Jetpack";
};

class GBACKPACK(base_JT12_lr): tgf_backpacks_JT12_LR {
    scope = 1;
    author = AUTHOR;
    displayName = "[TEA] JT-12 Jetpack (LR)";
};

class GBACKPACK(base_modular_pack): tgf_backpacks_modular_pack {
    scope = 2;
    author = AUTHOR;
    displayName = "[TEA] Modular Combat Pack";
};

class GBACKPACK(base_modular_pack_lr): tgf_backpacks_modular_pack_lr {
    scope = 2;
    author = AUTHOR;
    displayName = "[TEA] Modular Combat Pack (LR)";
};

class GBACKPACK(base_siege): tgf_backpacks_modular_pack_engi {
    scope = 2;
    author = AUTHOR;
    displayName = "[TEA] Modular Combat Pack (Siege)";

    mti_fortify_canFortify = 1;
	mti_fortify_availablePresets[] = {"Backpack_Default", 250};
};

class GBACKPACK(base_siege_lr): tgf_backpacks_modular_pack_engi {
    scope = 2;
    author = AUTHOR;
    displayName = "[TEA] Modular Combat Pack (Siege LR)";

    tf_dialog = "rt1523g_radio_dialog";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode = "tf_west_radio_code";
    tf_hasLRradio = 1;
    tf_range = 25000;
    tf_subtype = "digital_lr";

    mti_fortify_canFortify = 1;
	mti_fortify_availablePresets[] = {"Backpack_Default", 250};
};

MACRO_BACKPACK(2,mandoad_jt12,Mando'ad JT-12 Jetpack,JT12);
MACRO_BACKPACK_LR(2,mandoad_jt12,Mando'ad JT-12 Jetpack,JT12);
