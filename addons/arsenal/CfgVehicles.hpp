class CfgVehicles {
    class NonStrategic;
    class GVAR(base): NonStrategic {
        scope = 1;
        author = AUTHOR;
        displayName = "Arsenal";
        model = "3AS\3as_GNK\3as_GNK.p3d";
        editorCategory = QUOTE(PREFIX);
        editorSubcategory = QEGVAR(edsubcat,arsenals);

        icon = "iconObject_circle";
        destrType = "DestructBuilding";
        armor = 50;
        armorStructural = 4;

        GVAR(type) = ARSENALTYPE_NONE;

        class EventHandlers {
            init = QUOTE([(_this select 0)] call FUNC(init));
        };
    };
    class GVAR(common): GVAR(base) {
        scope = 2;
        displayName = "Common Arsenal";

        GVAR(type) = ARSENALTYPE_COMMON;
    };
    class GVAR(assault): GVAR(base) {
        scope = 2;
        displayName = "Assault Arsenal";

        GVAR(type) = ARSENALTYPE_ASSAULT;
    };
    class GVAR(heavyWeapons): GVAR(base) {
        scope = 2;
        displayName = "Heavy Weapons Arsenal";

        GVAR(type) = ARSENALTYPE_HEAVYWEAPONS;
    };
    class GVAR(recon): GVAR(base) {
        scope = 2;
        displayName = "Recon Arsenal";

        GVAR(type) = ARSENALTYPE_RECON;
    };
};
