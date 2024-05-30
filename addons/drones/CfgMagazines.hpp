class CfgMagazines {
    class mti_drones_auto_turret_packed;
    class GVAR(autoturret_packed): mti_drones_auto_turret_packed {
        scope = 2;
        author = AUTHOR;
        displayName = "[TEA] Auto Turret (Packed)";

        picture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";

        mti_drones_unpacksTo = QGVAR(autoturret);
    };
};
