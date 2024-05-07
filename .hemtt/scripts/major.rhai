// Read the current contents of script_version.hpp
let script_version = HEMTT_RFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .open_file()
    .read();

// Replace the current version with the new version
let patchprefix = "#define PATCHLVL ";
let currentpatch = HEMTT.project().version().patch();
let nextpatch = 0;

let minorprefix = "#define MINOR ";
let currentminor = HEMTT.project().version().minor();
let nextminor = 0;

let majorprefix = "#define MAJOR ";
let currentmajor = HEMTT.project().version().major();
let nextmajor = currentmajor + 1;

script_version.replace(patchprefix + currentpatch.to_string(), patchprefix + nextpatch.to_string());
script_version.replace(minorprefix + currentminor.to_string(), minorprefix + nextminor.to_string());
script_version.replace(majorprefix + currentmajor.to_string(), majorprefix + nextmajor.to_string());

// Write the modified contents to script_version.hpp
HEMTT_RFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .create_file()
    .write(script_version);

print("Project version was set to " + nextmajor.to_string() + "." + nextminor.to_string() + "." + nextpatch.to_string());
    