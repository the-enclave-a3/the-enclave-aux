class Attachments: Attachments {};

class Backpacks: Backpacks {
    MACRO_WHITELIST(EGBACKPACK(equipment,base_siege));
    MACRO_WHITELIST(EGBACKPACK(equipment,base_siege_lr));
};

class Goggles: Goggles {};

class Headgear: Headgear {};

class Items: Items {
    MACRO_WHITELIST(I_UavTerminal);
    MACRO_WHITELIST(ACE_UAVBattery);
    MACRO_WHITELIST(LRG_axe);

    MACRO_WHITELIST(EGVAR(drones,paap_packed));
    MACRO_WHITELIST(EGVAR(drones,patp_packed));
    MACRO_WHITELIST(EGVAR(drones,blasterturret_packed));
};

class Magazines: Magazines {
    MACRO_WHITELIST(EGVAR(drones,autoturret_packed));
    MACRO_WHITELIST(3AS_ThrowableCharge);
    MACRO_WHITELIST(MTI_SatchelCharge_Mag);

    MACRO_WHITELIST(mti_drones_paap_aa_mag);
    MACRO_WHITELIST(mti_drones_paap_at_mag);
};

class Uniforms: Uniforms {};

class Vests: Vests {};

class Weapons: Weapons {};
