class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class mti_drones_unpack {
                    class Prowler500;
                    class GVAR(prowler): Prowler500 {
                        condition = QUOTE(QQGVAR(prowler_packed) in (items _player));
                        statement = QUOTE([ARR_2(_player,QQGVAR(prowler_packed))] call mti_drones_fnc_unpack);
                    };
                };
            };
        };
    };

    class MTI_Prowler_500;
    class GVAR(prowler): MTI_Prowler_500 {
        scope = 2;
        author = AUTHOR;
        displayName = "[ENC] Prowler Recon Drone";

        faction = QUOTE(PREFIX);
        editorSubcategory = QEGVAR(edsubcat,drones);

        side = 2;
        crew = "I_UAV_AI";
        typicalCargo[] = {"I_UAV_AI"};

        mti_drones_packsTo = QGVAR(prowler_packed);
    };

    class MTI_Mortar_Turret_Base;
    class GVAR(adbm9): MTI_Mortar_Turret_Base {
        scope = 2;
        author = AUTHOR;

        displayName = "[ENC] AD-BM9";

        faction = QUOTE(PREFIX);
	    editorSubcategory = QEGVAR(edsubcat,drones);

        side = 2;
		crew = "I_UAV_AI";
        typicalCargo[] = {"I_UAV_AI"};

        class ace_csw {
            enabled = 1;
            disassembleWeapon = QGVAR(adbm9_tube);
            disassembleTurret = "mti_mortar_turret_tripod";
            desiredAmmo = 18;
            ammoLoadTime = 3;
            ammoUnloadTime = 3;
            proxyWeapon = "mti_mortar_turret_weapon";
            magazineLocation = "_target selectionPosition 'ammo_interact'";
        };
    };

    MACRO_GH_PREAMBLE;
    MACRO_GH_ITEM(GVAR(prowler_packed),Prowler (Packed));
    MACRO_GH_ITEM(GVAR(adbm9_tube),AD-BM9 (Tube));
};
