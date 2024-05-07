class CfgSettings {
    class CBA {
        class Versioning {
            class PREFIX {
                handler = QFUNC(handleVersionMismatch);

                class Dependencies {
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "true"};
                    ACE[] = {"ace_main", REQUIRED_ACE_VERSION, "true"};
                    MTI[] = {"mti_main", REQUIRED_MTI_VERSION, "true"};
                };
            };
        };
    };
};
