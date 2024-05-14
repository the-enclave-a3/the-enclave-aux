class CfgWeapons {
    // Helmets
    class EGHELMET(equipment,base_heavy);
    class EGHELMET(equipment,base_battle_master);
    class EGHELMET(equipment,base_viper);
    class EGHELMET(equipment,base_viper_vet);
    class EGHELMET(equipment,base_warlord);
    class EGHELMET(equipment,base_traditional);
    class EGHELMET(equipment,base_veteran);

    #include "cfg\Helmets.hpp"

    // NVGs
    class EGNVG(equipment,base_heavy_nv);
    class EGNVG(equipment,base_rangefinder_r);
    class EGNVG(equipment,base_recon_antenna_L);

    #include "cfg\NVGs.hpp"

    // Uniforms
    class EGUNIFORM(equipment,base);
    class EGUNIFORM(equipment,base_seal);

    #include "cfg\Uniforms.hpp"

    // Vests
    class EGVEST(equipment,base_heavy_armour);
    class EGVEST(equipment,base_battle_armour);
    class EGVEST(equipment,base_super_light_armour);
    class EGVEST(equipment,base_medium_armour);
    class EGVEST(equipment,base_light_armour);

    #include "cfg\Vests.hpp"
};
