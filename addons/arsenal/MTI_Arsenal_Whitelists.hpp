class MTI_Arsenal_Whitelists {
    class tea_common {
        scope = 2;
        type = ARSENALTYPE_COMMON;
        fullArsenal = 0;

        #include "Whitelists\Common.hpp"
    };

    class tea_assault: tea_common {
        scope = 2;
        type = ARSENALTYPE_ASSAULT;
        #include "Whitelists\Assault.hpp"
    };

    class tea_heavyweapons: tea_common {
        scope = 2;
        type = ARSENALTYPE_HEAVYWEAPONS;
        #include "Whitelists\HeavyWeapons.hpp"
    };

    class tea_recon: tea_common {
        scope = 2;
        type = ARSENALTYPE_RECON;
        #include "Whitelists\Recon.hpp"
    };

    class tea_siege: tea_common {
        scope = 2;
        type = ARSENALTYPE_SIEGE;
        #include "Whitelists\Siege.hpp"
    };
};
