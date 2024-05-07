// Read the current contents of script_version.hpp
let script_version = HEMTT_VFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .open_file()
    .read();

// Replace the current version with the new version
let prefix = "#define BUILD ";

script_version.replace(prefix + "0", prefix + date("[unix_timestamp]").to_string());

// Write the modified contents to script_version.hpp
HEMTT_VFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .create_file()
    .write(script_version);

print("Build version set to " + HEMTT.project().version().major() + "." + HEMTT.project().version().minor() + "." + HEMTT.project().version().patch() + "." + date("[unix_timestamp]").to_string());
