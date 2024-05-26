// Base classname defines
#define GUNIT(var1) GVAR(DOUBLES(unit,var1))
#define QGUNIT(var1) QUOTE(GUNIT(var1))
#define EGUNIT(var1,var2) EGVAR(var1,DOUBLES(unit,var2))
#define QEGUNIT(var1,var2) QUOTE(EGUNIT(var1,var2))

#define GUNIFORM(var1) GVAR(DOUBLES(uniform,var1))
#define QGUNIFORM(var1) QUOTE(GUNIFORM(var1))
#define EGUNIFORM(var1,var2) EGVAR(var1,DOUBLES(uniform,var2))
#define QEGUNIFORM(var1,var2) QUOTE(EGUNIFORM(var1,var2))

#define GHELMET(var1) GVAR(DOUBLES(helmet,var1))
#define QGHELMET(var1) QUOTE(GHELMET(var1))
#define EGHELMET(var1,var2) EGVAR(var1,DOUBLES(helmet,var2))
#define QEGHELMET(var1,var2) QUOTE(EGHELMET(var1,var2))

#define GBACKPACK(var1) GVAR(DOUBLES(backpack,var1))
#define QGBACKPACK(var1) QUOTE(GBACKPACK(var1))
#define EGBACKPACK(var1,var2) EGVAR(var1,DOUBLES(backpack,var2))
#define QEGBACKPACK(var1,var2) QUOTE(EGBACKPACK(var1,var2))

#define GVEST(var1) GVAR(DOUBLES(vest,var1))
#define QGVEST(var1) QUOTE(GVEST(var1))
#define EGVEST(var1,var2) EGVAR(var1,DOUBLES(vest,var2))
#define QEGVEST(var1,var2) QUOTE(EGVEST(var1,var2))

#define GNVG(var1) GVAR(DOUBLES(nvg,var1))
#define QGNVG(var1) QUOTE(GNVG(var1))
#define EGNVG(var1,var2) EGVAR(var1,DOUBLES(nvg,var2))
#define QEGNVG(var1,var2) QUOTE(EGNVG(var1,var2))

#define GFACEWEAR(var1) GVAR(DOUBLES(facewear,var1))
#define QGFACEWEAR(var1) QUOTE(GFACEWEAR(var1))
#define EGFACEWEAR(var1,var2) EGVAR(var1,DOUBLES(facewear,var2))
#define QEGFACEWEAR(var1,var2) QUOTE(EGFACEWEAR(var1,var2))

// Class construction defines
#define MACRO_HELMET(var_scope,var_classname,var_name,var_type) \
class GHELMET(var_classname): EGHELMET(equipment,DOUBLES(base,var_type)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\var_classname\camo1_co.paa),"\z\tgf\addons\helmets\viper\data\camo2_co.paa" }; \
    class XtdGearInfo { \
        model = QGVAR(helmet); \
        camo = QUOTE(var_classname); \
    }; \
}

#define MACRO_VEST(var_scope,var_classname,var_name,var_type) \
class GVEST(var_classname): EGVEST(equipment,DOUBLES(base,var_type)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\vests\var_classname\camo1_co.paa), QPATHTOF(data\vests\var_classname\camo2_co.paa) }; \
    class XtdGearInfo { \
        model = QGVAR(vest); \
        camo = QUOTE(var_classname); \
    }; \
}

#define MACRO_UNIFORM(var_scope,var_classname,var_name) \
class GUNIFORM(var_classname): EGUNIFORM(equipment,base) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    class ItemInfo: ItemInfo { \
        uniformClass = QGUNIT(var_classname); \
    }; \
    class XtdGearInfo { \
        model = QGVAR(uniform); \
        camo = QUOTE(var_classname); \
    }; \
}

#define MACRO_UNIFORM_SEAL(var_scope,var_classname,var_name) \
class GUNIFORM(DOUBLES(var_classname,seal)): EGUNIFORM(equipment,DOUBLES(base,seal)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    class ItemInfo: ItemInfo { \
        uniformClass = QGUNIT(DOUBLES(var_classname,seal)); \
    }; \
    class XtdGearInfo { \
        model = QGVAR(uniform); \
        camo = QUOTE(DOUBLES(var_classname,seal)); \
    }; \
}

#define MACRO_NVG(var_scope,var_classname,var_name,var_type) \
class GNVG(var_classname): EGNVG(equipment,DOUBLES(base,var_type)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\nvgs\var_classname\camo1_co.paa) }; \
    class XtdGearInfo { \
        model = QGVAR(nvg); \
        camo = QUOTE(var_classname); \
    }; \
}

#define MACRO_FACEWEAR(var_scope,var_classname,var_name,var_type) \
class GFACEWEAR(var_classname): EGFACEWEAR(equipment,DOUBLES(base,var_type)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\facewear\var_classname\camo1_co.paa) }; \
    class XtdGearInfo { \
        model = QGVAR(facewear); \
        camo = QUOTE(var_classname); \
    }; \
}

#define MACRO_UNIT(var_scope,var_classname,var_name) \
class GUNIT(var_classname): EGUNIT(equipment,base) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    uniformClass = QGUNIFORM(var_classname); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\var_classname\undersuit_co.paa) }; \
}

#define MACRO_UNIT_SEAL(var_scope,var_classname,var_name) \
class GUNIT(DOUBLES(var_classname,seal)): EGUNIT(equipment,DOUBLES(base,seal)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    uniformClass = QGUNIFORM(DOUBLES(var_classname,seal)); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\var_classname\undersuit_co.paa),"\z\tgf\addons\undersuit\data\camo2_co.paa" }; \
}

#define MACRO_BACKPACK(var_scope,var_classname,var_name,var_type) \
class GBACKPACK(var_classname): EGBACKPACK(equipment,DOUBLES(base,var_type)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\var_classname\camo1_co.paa) }; \
    class XtdGearInfo { \
        model = QGVAR(backpack); \
        camo = QUOTE(var_classname); \
    }; \
}

#define MACRO_BACKPACK_LR(var_scope,var_classname,var_name,var_type) \
class GBACKPACK(DOUBLES(var_classname,lr)): EGBACKPACK(equipment,TRIPLES(base,var_type,lr)) { \
    scope = var_scope; \
    displayName = QUOTE([TEA] var_name (LR)); \
    hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\var_classname\camo1_co.paa) }; \
    class XtdGearInfo { \
        model = QGVAR(backpack); \
        camo = QUOTE(DOUBLES(var_classname,lr)); \
    }; \
}
