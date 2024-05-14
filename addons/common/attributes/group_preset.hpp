class GVAR(Group_Preset) {
    property = QGVAR(Group_Preset);
    control = "combo";
    displayName = "Preset Group:";
    tooltip = "Default Preset for Patches & TFAR Radio Frequencies.";
    expression = QUOTE([ARR_2(_this,_value)] call FUNC(initPlayer));
    typeName = "NUMBER";
    condition = "objectBrain";
    defaultValue = 0;

    class Values {
        class None {
            name = "None";
            value = 0;
        };

        class Haran {
            name = "Haran";
            value = 1;
        };

        class Advisor {
            name = "Advisor";
            value = 2;
        };

        class Clan1 {
            name = "Clan 1";
            value = 3;
        };

        class Clan2 {
            name = "Clan 2";
            value = 4;
        };

        class Clan3 {
            name = "Clan 3";
            value = 5;
        };

        class Clan4 {
            name = "Clan 4";
            value = 6;
        };

        class Clan5 {
            name = "Clan 5";
            value = 7;
        };

        class Clan6 {
            name = "Clan 6";
            value = 8;
        };

        class Mandoad {
            name = "Mando'ad";
            value = 9;
        };

        class Guest {
            name = "Guest";
            value = 10;
        };
    };
};