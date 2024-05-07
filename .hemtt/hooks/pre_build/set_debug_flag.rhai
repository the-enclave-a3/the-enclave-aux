let scriptdebug = HEMTT_VFS.join("addons").join("main").join("script_debug.hpp");

let out = scriptdebug.create_file();

if HEMTT.is_release() {
    out.write("#define RELEASE_BUILD");
    print("Debug disabled!");
} else {
    out.write("#define DEV_BUILD");
    print("Debug enabled!");
}
