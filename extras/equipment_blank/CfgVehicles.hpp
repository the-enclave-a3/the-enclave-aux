class CfgVehicles {
    // Units
    class EGUNIT(equipment,base);
    class EGUNIT(equipment,base_seal);

    #include "cfg\Units.hpp"

    // Backpacks
    class EGBACKPACK(equipment,base_JT12);
    class EGBACKPACK(equipment,base_JT12_LR);

    #include "cfg\Backpacks.hpp"

    // Groundholders
    MACRO_GH_PREAMBLE;

    #include "cfg\Groundholders.hpp"
};
