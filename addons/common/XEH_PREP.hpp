PREP(empty);

// Helper functions only for dev builds...
#ifndef RELEASE_BUILD
PREP(weaponCfgHelper);
PREP(stripArrayBrackets);
PREP(bulkWeaponCfg);
#endif
