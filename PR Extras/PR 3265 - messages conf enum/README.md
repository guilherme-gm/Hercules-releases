# PR 3265 - enum for messages.conf & job name switch

## Converting hardcoded values to MSGTBL_ enum
Before you use the converter, make sure to update `src/common/msgtable.h` with your custom enum entries.

> :warning: This script requires the `patch` tool installed (it comes installed in Unix systems, but I am not sure about a Windows alternative)

You will need NodeJS installed in your machine: https://nodejs.org/en

0. Make a backup of your folder (or git commit your changes)
1. Copy the script in the `convert script` folder to your Hercules root directory
2. Open it and search for `const files = [`
3. Update the list with every file you want the converter to run in
4. After `const files = `, find `const idTable = {`, update it with your custom values as in `src/common/msgtable.h`. This is the opposite of `msgtable.h`, it must follow:
   ```JS
   numericalId: 'Constant_Name',
   ```
5. Save the file
6. Run this script: `node generate_patch.js`
7. Once it finishes, `generated_patch.patch` will be created in the same folder as the script
8. Apply the patch: `patch -p1 --no-backup-if-mismatc < generated_patch.patch`
9. Use a text editor that can search your entire project and search for those strings:
   1.  `msg_fd(`
   2.  `msg_sd(`
   3.  `msg_txt(`
10. If any of them are found, they were cases the script could not upgrade to enums. Update them now.
11. Finally, with a text editor that can find and replace in multiple files at once, perform those replacements:
    1.  `msg_fd_patched(` --> `msg_fd(`
    2.  `msg_sd_patched(` --> `msg_sd(`
    3.  `msg_txt_patched(` --> `msg_txt(`
12. You are done. Everything should work now.


## JobName dump plugin
This plugin was meant to validate whether all job names are properly remapped after switching from hardcoded switch/cases
into X-macro using JOBENUM_VALUE.

This basically loops through a hardcoded list of job constants and prints their ID and returned name.

> :warning: if you have custom jobs, this won't pick them automatically!!

See the plugin at plugins folder. To use it:
1. Add it to your `src/plugins/` folder
2. Build it: `make plugin.test_jobname`
3. Run map-server with it: `./map-server --load-plugin test_jobname`
    - A list of `JobID => JobName` will be printed to your console
4. Run char-server with it: `./char-server --load-plugin test_jobname`
    - A list of `JobID => JobName` will be printed to your console
