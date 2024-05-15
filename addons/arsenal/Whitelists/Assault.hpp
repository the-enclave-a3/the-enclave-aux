class Attachments: Attachments {};

class Backpacks: Backpacks {};

class Goggles: Goggles {};

class Headgear: Headgear {};

class Items: Items {};

class Magazines: Magazines {
    MACRO_WHITELIST(MTI_BreachingCharge_Mag);

    // Primary
    MACRO_WHITELIST(GMAGAZINE(e11d));
    MACRO_WHITELIST(GMAGAZINE(dc15c_gl));
    MACRO_WHITELIST(GMAGAZINE(westarm5_gl));
    MACRO_WHITELIST(GMAGAZINE(westarm5));
    MACRO_WHITELIST(GMAGAZINE(dc15c));
    MACRO_WHITELIST(GMAGAZINE(epl2));
    MACRO_WHITELIST(GMAGAZINE(rd4_1rnd));
    MACRO_WHITELIST(GMAGAZINE(rd4_6rnd));
    MACRO_WHITELIST(GMAGAZINE(mpl));
};

class Uniforms: Uniforms {};

class Vests: Vests {};

class Weapons: Weapons {
    // Primary
    MACRO_WHITELIST(GWEAPON(e11d));
    MACRO_WHITELIST(GWEAPON(dc15c_gl));
    MACRO_WHITELIST(GWEAPON(westarm5_gl));
    MACRO_WHITELIST(GWEAPON(westarm5));
    MACRO_WHITELIST(GWEAPON(dc15c));
    MACRO_WHITELIST(GWEAPON(epl2));
    MACRO_WHITELIST(GWEAPON(rd4));
    MACRO_WHITELIST(GWEAPON(mpl));

    // BCSE
    MACRO_WHITELIST(GWEAPON(e11d_bcsewpn));
    MACRO_WHITELIST(GWEAPON(dc15c_gl_bcsewpn));
    MACRO_WHITELIST(GWEAPON(westarm5_gl_bcsewpn));
    MACRO_WHITELIST(GWEAPON(westarm5_bcsewpn));
    MACRO_WHITELIST(GWEAPON(dc15c_bcsewpn));
    MACRO_WHITELIST(GWEAPON(epl2_bcsewpn));
    MACRO_WHITELIST(GWEAPON(rd4_bcsewpn));
    MACRO_WHITELIST(GWEAPON(mpl_bcsewpn));
};

