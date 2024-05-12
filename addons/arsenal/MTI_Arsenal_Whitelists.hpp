class MTI_Arsenal_Whitelists {
    class enc_common {
        scope = 2;
        type = ARSENALTYPE_COMMON;
        fullArsenal = 0;

        #include "Whitelists\Common.hpp"
    };

    class enc_assault: enc_common {
        scope = 2;
        type = ARSENALTYPE_ASSAULT;
        #include "Whitelists\Assault.hpp"
    };

    class enc_heavyweapons: enc_common {
        scope = 2;
        type = ARSENALTYPE_HEAVYWEAPONS;
        #include "Whitelists\HeavyWeapons.hpp"
    };

    class enc_recon: enc_common {
        scope = 2;
        type = ARSENALTYPE_RECON;
        #include "Whitelists\Recon.hpp"
    };

    // below not implemented
    class enc_siege: enc_common {
        scope = 1;
        type = ARSENALTYPE_NONE;
        #include "Whitelists\Siege.hpp"
    };
};
