class CfgAmmo {
    class JLTS_bullet_carbine_red;
    class GAMMO(base): JLTS_bullet_carbine_red {
        author = AUTHOR;
        model = "ls_weapons_core\Effects\laser_red.p3d";

        effectFly = "ls_plasma_red";
        explosionEffects = "ls_plasma_impact";
        cratereffects = "ls_plasma_impact";

        caliber = 1;
        hit = 10;
        tracerScale = 0.8;
        brightness = 500;
    };

    class GAMMO(pistol): GAMMO(base) {
        hit = 10;
        caliber = 1;
    };

    class GAMMO(carbine): GAMMO(base) {
        hit = 10;
        caliber = 1.2;
    };

    class GAMMO(rifle): GAMMO(base) {
        hit = 14;
        caliber = 1.3;
    };

    class GAMMO(marksman): GAMMO(base) {
        hit = 18;
        caliber = 1.5;
    };

    class GAMMO(machine_gun): GAMMO(base) {
        hit = 16;
        caliber = 1.2;
        dangerRadiusBulletClose = 14;
        dangerRadiusHit = 30;
        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;
    };

    class SWLW_ammo_scatter_red;
    class GAMMO(shotgun): SWLW_ammo_scatter_red {
        author = AUTHOR;
        hit = 10;
        caliber = 0.8;
        simulation = "shotSpread";
        fireSpreadAngle = 3;
    };

    class GAMMO(assault_cannon): GAMMO(base) {
        hit = 18;
        caliber = 1.4;
        dangerRadiusBulletClose = 14;
        dangerRadiusHit = 30;
        suppressionRadiusBulletClose = 20;
        suppressionRadiusHit = 40;
    };

    class GAMMO(sniper): GAMMO(base) {
        hit = 21;
        caliber = 1.8;
    };
};
