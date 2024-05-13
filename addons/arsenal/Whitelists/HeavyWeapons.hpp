class Attachments: Attachments {};

class Backpacks: Backpacks {};

class Goggles: Goggles {};

class Headgear: Headgear {};

class Items: Items {};

class Magazines: Magazines {
    MACRO_WHITELIST(GMAGAZINE(e15));
    MACRO_WHITELIST(GMAGAZINE(el34));
    MACRO_WHITELIST(GMAGAZINE(t20_ac));
    MACRO_WHITELIST(GMAGAZINE(ls150));

    MACRO_WHITELIST(GMAGAZINE(s7));
    MACRO_WHITELIST(GMAGAZINE(plx1_at));
    MACRO_WHITELIST(GMAGAZINE(plx1_aa));
    MACRO_WHITELIST(GMAGAZINE(z6));
};

class Uniforms: Uniforms {};

class Vests: Vests {};

class Weapons: Weapons {
    MACRO_WHITELIST(GWEAPON(e15));
    MACRO_WHITELIST(GWEAPON(el34));
    MACRO_WHITELIST(GWEAPON(t20_ac));
    MACRO_WHITELIST(GWEAPON(ls150));

    MACRO_WHITELIST(GWEAPON(s7));
    MACRO_WHITELIST(GWEAPON(plx1));
    MACRO_WHITELIST(GWEAPON(z6));
};
