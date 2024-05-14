class GNVG(base_circuit): tgf_nvg_circuit {
    scope = 2;
    author = AUTHOR;
    displayName = "[ENC] Integrated NV Circuitry";
};

class GNVG(base_heavy_nv): tgf_nvg_heavy_nv {
    scope = 1;
    author = AUTHOR;
    displayName = "[ENC] Heavy Mandalorian NV Attachment";
};

class GNVG(base_rangefinder_r): tgf_nvg_rangefinder_r {
    scope = 1;
    author = AUTHOR;
    displayName = "[ENC] Mandalorian Rangefinder";
};

class GNVG(base_recon_antenna_L): tgf_nvg_recon_antenna_L {
    scope = 1;
    author = AUTHOR;
    displayName = "[ENC] Mandalorian Recon Antenna";
};


// Foundling
class GNVG(foundling_rangefinder_r): GNVG(base_rangefinder_r) {
    scope = 2;
    displayName = "[ENC] Foundling Rangefinder";
    class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "foundling_rangefinder_r";
    };
};

// Mando'ad
MACRO_NVG(2,mandoad_heavy,Mando'ad Heavy NV Attachment,heavy_nv);
MACRO_NVG(2,mandoad_rangefinder,Mando'ad Rangefinder,rangefinder_r);
