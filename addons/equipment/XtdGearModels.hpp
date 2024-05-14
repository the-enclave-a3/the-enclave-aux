class XtdGearModels {
    class CfgWeapons {
        class GVAR(helmet) {
            label = QUOTE(MODEL_NAME Helmet);
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {
                    "foundling",
                    "mandoad_battle_master",
                    "mandoad_heavy",
                    "mandoad_traditional",
                    "mandoad_veteran",
                    "mandoad_viper",
                    "mandoad_viper_veteran",
                    "mandoad_warlord"
                };

                class foundling { label = "Foundling"; };
                class mandoad_battle_master { label = "Battlemaster"; };
                class mandoad_heavy { label = "Heavy"; };
                class mandoad_traditional { label = "Traditional"; };
                class mandoad_veteran { label = "Veteran"; };
                class mandoad_viper { label = "Viper"; };
                class mandoad_viper_veteran { label = "Viper Veteran"; };
                class mandoad_warlord { label = "Warlord"; };
            };
        };

        class GVAR(vest) {
            label = QUOTE(MODEL_NAME Vest);
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {
                    "foundling",
                    "mandoad_battle",
                    "mandoad_heavy",
                    "mandoad_medium",
                    "mandoad_recon",
                    "mandoad_traditional"
                };

                class foundling { label = "Foundling"; };
                class mandoad_battle { label = "Battle"; };
                class mandoad_heavy { label = "Heavy"; };
                class mandoad_medium { label = "Medium"; };
                class mandoad_recon { label = "Recon"; };
                class mandoad_traditional { label = "Traditional"; };
            };
        };

        class GVAR(uniform) {
            label = QUOTE(MODEL_NAME Uniform);
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {
                    "blue",
                    "blue_seal",
                    "grey",
                    "grey_seal",
                    "white",
                    "white_seal"
                };

                class blue { label = "Blue"; };
                class blue_seal { label = "Blue, Seal"; };
                class grey { label = "Grey"; };
                class grey_seal { label = "Grey, Seal"; };
                class white { label = "White"; };
                class white_seal { label = "White, Seal"; };
            };
        };

        class GVAR(nvg) {
            label = QUOTE(MODEL_NAME NVG);
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {
                    "foundling_rangefinder_r",
                    "mandoad_heavy",
                    "mandoad_rangefinder"
                };

                class foundling_rangefinder_r { label = "Foundling"; };
                class mandoad_heavy  { label = "Heavy"; };
                class mandoad_rangefinder  { label = "Rangefinder"; };
            };
        };
    };
    
    class CfgVehicles {
        class GVAR(backpack) {
            label = QUOTE(MODEL_NAME Backpack);
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {
                    "mandoad_jt12",
                    "mandoad_jt12_lr"
                };

                class mandoad_jt12 { label = "JT-12"; };
                class mandoad_jt12_lr { label = "JT-12 (LR)"; };
            };
        };
    };

    class CfgGlasses {
        class GVAR(facewear) {
            label = QUOTE(MODEL_NAME Facewear);
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {
                    // placeholder
                };

                // class placeholder { label = "Placeholder"; };
            };
        };
    };
};
