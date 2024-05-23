class CfgWeapons {
    class mti_drones_prowler500_packed;
    class GVAR(prowler_packed): mti_drones_prowler500_packed {
        scope = 2;
        author = AUTHOR;
        displayName = "[ENC] Prowler (Packed)";

        mti_drones_unpacksTo = QGVAR(prowler);
    };

    class MTI_Mortar_Turret_carry_tube;
    class GVAR(adbm9_tube): MTI_Mortar_Turret_carry_tube {
        scope = 2;
        author = AUTHOR;
        displayName = "[ENC] AD-BM9 (Tube)";
        class ACE_CSW {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                mti_mortar_turret_tripod = QGVAR(adbm9);
            };
        };
    };
};
