// Read the current contents of script_version.hpp
let script_version = HEMTT_RFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .open_file()
    .read();

// Replace the current version with the new version
let prefix = "#define PATCHLVL ";
let current = HEMTT.project().version().patch();
let next = current + 1;

script_version.replace(prefix + current.to_string(), prefix + next.to_string());

// Write the modified contents to script_version.hpp
HEMTT_RFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .create_file()
    .write(script_version);

print("Project version was set to " + HEMTT.project().version().major().to_string() + "." + HEMTT.project().version().minor().to_string() + "." + next.to_string());
