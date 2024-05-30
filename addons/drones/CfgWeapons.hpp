class CfgWeapons {
    class mti_drones_prowler500_packed;
    class GVAR(prowler_packed): mti_drones_prowler500_packed {
        scope = 2;
        author = AUTHOR;
        displayName = "[TEA] Prowler (Packed)";

        mti_drones_unpacksTo = QGVAR(prowler);
    };

    class MTI_Mortar_Turret_carry_tube;
    class GVAR(adbm9_tube): MTI_Mortar_Turret_carry_tube {
        scope = 2;
        author = AUTHOR;
        displayName = "[TEA] AD-BM9 (Tube)";
        class ACE_CSW {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                mti_mortar_turret_tripod = QGVAR(adbm9);
            };
        };
    };

    class mti_drones_paap_aa_packed;
    class GVAR(paap_packed): mti_drones_paap_aa_packed {
        scope = 2;
        author = AUTHOR;
        displayName = "[TEA] PAAP (Packed)";

        mti_drones_unpacksTo = QGVAR(paap);
    };

    class mti_drones_paap_at_packed;
    class GVAR(patp_packed): mti_drones_paap_at_packed {
        scope = 2;
        author = AUTHOR;
        displayName = "[TEA] PATP (Packed)";

        mti_drones_unpacksTo = QGVAR(patp);
    };

    class mti_drones_blaster_turret_packed;
    class GVAR(blasterturret_packed): mti_drones_blaster_turret_packed {
        scope = 2;
        author = AUTHOR;
        displayName = "[TEA] Blaster Turret (Packed)";

        mti_drones_unpacksTo = QGVAR(blasterturret);
    };

    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {
            QGVAR(autoturret_packed_muzzle)
        };

        class ThrowMuzzle;
        class GVAR(autoturret_packed_muzzle): ThrowMuzzle {
            magazines[] = {QGVAR(autoturret_packed)};
        };
    };
};
