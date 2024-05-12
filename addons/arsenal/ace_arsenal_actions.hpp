#define ALL_TABS {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}
// NOT NEEDED AS OF RIGHT NOW...
/*
class ace_arsenal_actions {
    class GVAR(actions) {
        displayName = "Enclave - Perms";
        condition = QUOTE(([ace_arsenal_currentBox] call FUNC(getType)) > 0);
        scopeEditor = 1;
        updateOnCargoChanged = 0;
        tabs[] = ALL_TABS;

        class permsButton {
            label = "Get Perms";
            condition = QUOTE(true);
            statement = QUOTE([ARR_2(_this select 0,ace_arsenal_currentBox)] call FUNC(perms));
        };
    };
};
*/
