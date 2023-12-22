/**
 * This plugin will call inter->job_name and pc->job_name
 * with all known job constants (as of 2023.12.22).
 * 
 * It will long into the terminal a list of JobID => Job Name
 * 
 * This is usefull to validate that the conversion to XMacro and MSGTBL_ constants
 * did not introduce unexpected issues.
 * 
 * You can find a dump of the result of current master (v2023.11) and this branch
 * at jobname_dump folder.
 * 
 * To run it:
 * $ make plugin.test_jobname
 * $ ./map-server --load-plugin test_jobname
 * $ ./char-server --load-plugin test_jobname
 */

#include "common/hercules.h"

#include "common/core.h"
#include "common/showmsg.h"

#include "map/pc.h"
#include "char/inter.h"

#include <stdlib.h>

#include "common/HPMDataCheck.h"

HPExport struct hplugin_info pinfo = {
	"test_jobname",    // Plugin name
	SERVER_TYPE_MAP | SERVER_TYPE_CHAR,     // Which server types this plugin works with?
	"0.1",               // Plugin version
	HPM_VERSION,         // HPM Version (don't change, macro is automatically updated)
};


void server_online(void)
{
	ShowMessage("===============================================================================\n");
	ShowStatus("Generating list.\n");

	if (SERVER_TYPE == SERVER_TYPE_CHAR) {
		ShowMessage("--------------- inter.c - inter_job_name\n");
		ShowMessage("%d => %s\n", JOB_NOVICE, inter->job_name(JOB_NOVICE));
		ShowMessage("%d => %s\n", JOB_SWORDMAN, inter->job_name(JOB_SWORDMAN));
		ShowMessage("%d => %s\n", JOB_MAGE, inter->job_name(JOB_MAGE));
		ShowMessage("%d => %s\n", JOB_ARCHER, inter->job_name(JOB_ARCHER));
		ShowMessage("%d => %s\n", JOB_ACOLYTE, inter->job_name(JOB_ACOLYTE));
		ShowMessage("%d => %s\n", JOB_MERCHANT, inter->job_name(JOB_MERCHANT));
		ShowMessage("%d => %s\n", JOB_THIEF, inter->job_name(JOB_THIEF));
		ShowMessage("%d => %s\n", JOB_KNIGHT, inter->job_name(JOB_KNIGHT));
		ShowMessage("%d => %s\n", JOB_PRIEST, inter->job_name(JOB_PRIEST));
		ShowMessage("%d => %s\n", JOB_WIZARD, inter->job_name(JOB_WIZARD));
		ShowMessage("%d => %s\n", JOB_BLACKSMITH, inter->job_name(JOB_BLACKSMITH));
		ShowMessage("%d => %s\n", JOB_HUNTER, inter->job_name(JOB_HUNTER));
		ShowMessage("%d => %s\n", JOB_ASSASSIN, inter->job_name(JOB_ASSASSIN));
		ShowMessage("%d => %s\n", JOB_CRUSADER, inter->job_name(JOB_CRUSADER));
		ShowMessage("%d => %s\n", JOB_MONK, inter->job_name(JOB_MONK));
		ShowMessage("%d => %s\n", JOB_SAGE, inter->job_name(JOB_SAGE));
		ShowMessage("%d => %s\n", JOB_ROGUE, inter->job_name(JOB_ROGUE));
		ShowMessage("%d => %s\n", JOB_ALCHEMIST, inter->job_name(JOB_ALCHEMIST));
		ShowMessage("%d => %s\n", JOB_WEDDING, inter->job_name(JOB_WEDDING));
		ShowMessage("%d => %s\n", JOB_SUPER_NOVICE, inter->job_name(JOB_SUPER_NOVICE));
		ShowMessage("%d => %s\n", JOB_GUNSLINGER, inter->job_name(JOB_GUNSLINGER));
		ShowMessage("%d => %s\n", JOB_NINJA, inter->job_name(JOB_NINJA));
		ShowMessage("%d => %s\n", JOB_XMAS, inter->job_name(JOB_XMAS));
		ShowMessage("%d => %s\n", JOB_SUMMER, inter->job_name(JOB_SUMMER));
		ShowMessage("%d => %s\n", JOB_NOVICE_HIGH, inter->job_name(JOB_NOVICE_HIGH));
		ShowMessage("%d => %s\n", JOB_SWORDMAN_HIGH, inter->job_name(JOB_SWORDMAN_HIGH));
		ShowMessage("%d => %s\n", JOB_MAGE_HIGH, inter->job_name(JOB_MAGE_HIGH));
		ShowMessage("%d => %s\n", JOB_ARCHER_HIGH, inter->job_name(JOB_ARCHER_HIGH));
		ShowMessage("%d => %s\n", JOB_ACOLYTE_HIGH, inter->job_name(JOB_ACOLYTE_HIGH));
		ShowMessage("%d => %s\n", JOB_MERCHANT_HIGH, inter->job_name(JOB_MERCHANT_HIGH));
		ShowMessage("%d => %s\n", JOB_THIEF_HIGH, inter->job_name(JOB_THIEF_HIGH));
		ShowMessage("%d => %s\n", JOB_LORD_KNIGHT, inter->job_name(JOB_LORD_KNIGHT));
		ShowMessage("%d => %s\n", JOB_HIGH_PRIEST, inter->job_name(JOB_HIGH_PRIEST));
		ShowMessage("%d => %s\n", JOB_HIGH_WIZARD, inter->job_name(JOB_HIGH_WIZARD));
		ShowMessage("%d => %s\n", JOB_WHITESMITH, inter->job_name(JOB_WHITESMITH));
		ShowMessage("%d => %s\n", JOB_SNIPER, inter->job_name(JOB_SNIPER));
		ShowMessage("%d => %s\n", JOB_ASSASSIN_CROSS, inter->job_name(JOB_ASSASSIN_CROSS));
		ShowMessage("%d => %s\n", JOB_PALADIN, inter->job_name(JOB_PALADIN));
		ShowMessage("%d => %s\n", JOB_CHAMPION, inter->job_name(JOB_CHAMPION));
		ShowMessage("%d => %s\n", JOB_PROFESSOR, inter->job_name(JOB_PROFESSOR));
		ShowMessage("%d => %s\n", JOB_STALKER, inter->job_name(JOB_STALKER));
		ShowMessage("%d => %s\n", JOB_CREATOR, inter->job_name(JOB_CREATOR));
		ShowMessage("%d => %s\n", JOB_BABY, inter->job_name(JOB_BABY));
		ShowMessage("%d => %s\n", JOB_BABY_SWORDMAN, inter->job_name(JOB_BABY_SWORDMAN));
		ShowMessage("%d => %s\n", JOB_BABY_MAGE, inter->job_name(JOB_BABY_MAGE));
		ShowMessage("%d => %s\n", JOB_BABY_ARCHER, inter->job_name(JOB_BABY_ARCHER));
		ShowMessage("%d => %s\n", JOB_BABY_ACOLYTE, inter->job_name(JOB_BABY_ACOLYTE));
		ShowMessage("%d => %s\n", JOB_BABY_MERCHANT, inter->job_name(JOB_BABY_MERCHANT));
		ShowMessage("%d => %s\n", JOB_BABY_THIEF, inter->job_name(JOB_BABY_THIEF));
		ShowMessage("%d => %s\n", JOB_BABY_KNIGHT, inter->job_name(JOB_BABY_KNIGHT));
		ShowMessage("%d => %s\n", JOB_BABY_PRIEST, inter->job_name(JOB_BABY_PRIEST));
		ShowMessage("%d => %s\n", JOB_BABY_WIZARD, inter->job_name(JOB_BABY_WIZARD));
		ShowMessage("%d => %s\n", JOB_BABY_BLACKSMITH, inter->job_name(JOB_BABY_BLACKSMITH));
		ShowMessage("%d => %s\n", JOB_BABY_HUNTER, inter->job_name(JOB_BABY_HUNTER));
		ShowMessage("%d => %s\n", JOB_BABY_ASSASSIN, inter->job_name(JOB_BABY_ASSASSIN));
		ShowMessage("%d => %s\n", JOB_BABY_CRUSADER, inter->job_name(JOB_BABY_CRUSADER));
		ShowMessage("%d => %s\n", JOB_BABY_MONK, inter->job_name(JOB_BABY_MONK));
		ShowMessage("%d => %s\n", JOB_BABY_SAGE, inter->job_name(JOB_BABY_SAGE));
		ShowMessage("%d => %s\n", JOB_BABY_ROGUE, inter->job_name(JOB_BABY_ROGUE));
		ShowMessage("%d => %s\n", JOB_BABY_ALCHEMIST, inter->job_name(JOB_BABY_ALCHEMIST));
		ShowMessage("%d => %s\n", JOB_SUPER_BABY, inter->job_name(JOB_SUPER_BABY));
		ShowMessage("%d => %s\n", JOB_TAEKWON, inter->job_name(JOB_TAEKWON));
		ShowMessage("%d => %s\n", JOB_STAR_GLADIATOR, inter->job_name(JOB_STAR_GLADIATOR));
		ShowMessage("%d => %s\n", JOB_SOUL_LINKER, inter->job_name(JOB_SOUL_LINKER));
		ShowMessage("%d => %s\n", JOB_GANGSI, inter->job_name(JOB_GANGSI));
		ShowMessage("%d => %s\n", JOB_DEATH_KNIGHT, inter->job_name(JOB_DEATH_KNIGHT));
		ShowMessage("%d => %s\n", JOB_DARK_COLLECTOR, inter->job_name(JOB_DARK_COLLECTOR));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT, inter->job_name(JOB_RUNE_KNIGHT));
		ShowMessage("%d => %s\n", JOB_WARLOCK, inter->job_name(JOB_WARLOCK));
		ShowMessage("%d => %s\n", JOB_RANGER, inter->job_name(JOB_RANGER));
		ShowMessage("%d => %s\n", JOB_ARCH_BISHOP, inter->job_name(JOB_ARCH_BISHOP));
		ShowMessage("%d => %s\n", JOB_MECHANIC, inter->job_name(JOB_MECHANIC));
		ShowMessage("%d => %s\n", JOB_GUILLOTINE_CROSS, inter->job_name(JOB_GUILLOTINE_CROSS));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT_T, inter->job_name(JOB_RUNE_KNIGHT_T));
		ShowMessage("%d => %s\n", JOB_WARLOCK_T, inter->job_name(JOB_WARLOCK_T));
		ShowMessage("%d => %s\n", JOB_RANGER_T, inter->job_name(JOB_RANGER_T));
		ShowMessage("%d => %s\n", JOB_ARCH_BISHOP_T, inter->job_name(JOB_ARCH_BISHOP_T));
		ShowMessage("%d => %s\n", JOB_MECHANIC_T, inter->job_name(JOB_MECHANIC_T));
		ShowMessage("%d => %s\n", JOB_GUILLOTINE_CROSS_T, inter->job_name(JOB_GUILLOTINE_CROSS_T));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD, inter->job_name(JOB_ROYAL_GUARD));
		ShowMessage("%d => %s\n", JOB_SORCERER, inter->job_name(JOB_SORCERER));
		ShowMessage("%d => %s\n", JOB_SURA, inter->job_name(JOB_SURA));
		ShowMessage("%d => %s\n", JOB_GENETIC, inter->job_name(JOB_GENETIC));
		ShowMessage("%d => %s\n", JOB_SHADOW_CHASER, inter->job_name(JOB_SHADOW_CHASER));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD_T, inter->job_name(JOB_ROYAL_GUARD_T));
		ShowMessage("%d => %s\n", JOB_SORCERER_T, inter->job_name(JOB_SORCERER_T));
		ShowMessage("%d => %s\n", JOB_SURA_T, inter->job_name(JOB_SURA_T));
		ShowMessage("%d => %s\n", JOB_GENETIC_T, inter->job_name(JOB_GENETIC_T));
		ShowMessage("%d => %s\n", JOB_SHADOW_CHASER_T, inter->job_name(JOB_SHADOW_CHASER_T));
		ShowMessage("%d => %s\n", JOB_BABY_RUNE, inter->job_name(JOB_BABY_RUNE));
		ShowMessage("%d => %s\n", JOB_BABY_WARLOCK, inter->job_name(JOB_BABY_WARLOCK));
		ShowMessage("%d => %s\n", JOB_BABY_RANGER, inter->job_name(JOB_BABY_RANGER));
		ShowMessage("%d => %s\n", JOB_BABY_BISHOP, inter->job_name(JOB_BABY_BISHOP));
		ShowMessage("%d => %s\n", JOB_BABY_MECHANIC, inter->job_name(JOB_BABY_MECHANIC));
		ShowMessage("%d => %s\n", JOB_BABY_CROSS, inter->job_name(JOB_BABY_CROSS));
		ShowMessage("%d => %s\n", JOB_BABY_GUARD, inter->job_name(JOB_BABY_GUARD));
		ShowMessage("%d => %s\n", JOB_BABY_SORCERER, inter->job_name(JOB_BABY_SORCERER));
		ShowMessage("%d => %s\n", JOB_BABY_SURA, inter->job_name(JOB_BABY_SURA));
		ShowMessage("%d => %s\n", JOB_BABY_GENETIC, inter->job_name(JOB_BABY_GENETIC));
		ShowMessage("%d => %s\n", JOB_BABY_CHASER, inter->job_name(JOB_BABY_CHASER));
		ShowMessage("%d => %s\n", JOB_SUPER_NOVICE_E, inter->job_name(JOB_SUPER_NOVICE_E));
		ShowMessage("%d => %s\n", JOB_SUPER_BABY_E, inter->job_name(JOB_SUPER_BABY_E));
		ShowMessage("%d => %s\n", JOB_REBELLION, inter->job_name(JOB_REBELLION));
		ShowMessage("%d => %s\n", JOB_SUMMONER, inter->job_name(JOB_SUMMONER));
		ShowMessage("%d => %s\n", JOB_BABY_SUMMONER, inter->job_name(JOB_BABY_SUMMONER));
		ShowMessage("%d => %s\n", JOB_BABY_NINJA, inter->job_name(JOB_BABY_NINJA));
		ShowMessage("%d => %s\n", JOB_BABY_TAEKWON, inter->job_name(JOB_BABY_TAEKWON));
		ShowMessage("%d => %s\n", JOB_BABY_STAR_GLADIATOR, inter->job_name(JOB_BABY_STAR_GLADIATOR));
		ShowMessage("%d => %s\n", JOB_BABY_SOUL_LINKER, inter->job_name(JOB_BABY_SOUL_LINKER));
		ShowMessage("%d => %s\n", JOB_BABY_GUNSLINGER, inter->job_name(JOB_BABY_GUNSLINGER));
		ShowMessage("%d => %s\n", JOB_BABY_REBELLION, inter->job_name(JOB_BABY_REBELLION));
		ShowMessage("%d => %s\n", JOB_STAR_EMPEROR, inter->job_name(JOB_STAR_EMPEROR));
		ShowMessage("%d => %s\n", JOB_SOUL_REAPER, inter->job_name(JOB_SOUL_REAPER));
		ShowMessage("%d => %s\n", JOB_BABY_STAR_EMPEROR, inter->job_name(JOB_BABY_STAR_EMPEROR));
		ShowMessage("%d => %s\n", JOB_BABY_SOUL_REAPER, inter->job_name(JOB_BABY_SOUL_REAPER));
		ShowMessage("%d => %s\n", JOB_BARD, inter->job_name(JOB_BARD));
		ShowMessage("%d => %s\n", JOB_DANCER, inter->job_name(JOB_DANCER));
		ShowMessage("%d => %s\n", JOB_MAX_BASIC, inter->job_name(JOB_MAX_BASIC));
		ShowMessage("%d => %s\n", JOB_2004_BEGIN, inter->job_name(JOB_2004_BEGIN));
		ShowMessage("%d => %s\n", JOB_CLOWN, inter->job_name(JOB_CLOWN));
		ShowMessage("%d => %s\n", JOB_GYPSY, inter->job_name(JOB_GYPSY));
		ShowMessage("%d => %s\n", JOB_KAGEROU, inter->job_name(JOB_KAGEROU));
		ShowMessage("%d => %s\n", JOB_OBORO, inter->job_name(JOB_OBORO));
		ShowMessage("%d => %s\n", JOB_BABY_KAGEROU, inter->job_name(JOB_BABY_KAGEROU));
		ShowMessage("%d => %s\n", JOB_BABY_OBORO, inter->job_name(JOB_BABY_OBORO));
		ShowMessage("%d => %s\n", JOB_BABY_BARD, inter->job_name(JOB_BABY_BARD));
		ShowMessage("%d => %s\n", JOB_BABY_DANCER, inter->job_name(JOB_BABY_DANCER));
		ShowMessage("%d => %s\n", JOB_MINSTREL, inter->job_name(JOB_MINSTREL));
		ShowMessage("%d => %s\n", JOB_WANDERER, inter->job_name(JOB_WANDERER));
		ShowMessage("%d => %s\n", JOB_MINSTREL_T, inter->job_name(JOB_MINSTREL_T));
		ShowMessage("%d => %s\n", JOB_WANDERER_T, inter->job_name(JOB_WANDERER_T));
		ShowMessage("%d => %s\n", JOB_BABY_MINSTREL, inter->job_name(JOB_BABY_MINSTREL));
		ShowMessage("%d => %s\n", JOB_BABY_WANDERER, inter->job_name(JOB_BABY_WANDERER));
		ShowMessage("%d => %s\n", JOB_KNIGHT2, inter->job_name(JOB_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_CRUSADER2, inter->job_name(JOB_CRUSADER2));
		ShowMessage("%d => %s\n", JOB_LORD_KNIGHT2, inter->job_name(JOB_LORD_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_PALADIN2, inter->job_name(JOB_PALADIN2));
		ShowMessage("%d => %s\n", JOB_BABY_KNIGHT2, inter->job_name(JOB_BABY_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_BABY_CRUSADER2, inter->job_name(JOB_BABY_CRUSADER2));
		ShowMessage("%d => %s\n", JOB_STAR_GLADIATOR2, inter->job_name(JOB_STAR_GLADIATOR2));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT2, inter->job_name(JOB_RUNE_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT_T2, inter->job_name(JOB_RUNE_KNIGHT_T2));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD2, inter->job_name(JOB_ROYAL_GUARD2));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD_T2, inter->job_name(JOB_ROYAL_GUARD_T2));
		ShowMessage("%d => %s\n", JOB_RANGER2, inter->job_name(JOB_RANGER2));
		ShowMessage("%d => %s\n", JOB_RANGER_T2, inter->job_name(JOB_RANGER_T2));
		ShowMessage("%d => %s\n", JOB_MECHANIC2, inter->job_name(JOB_MECHANIC2));
		ShowMessage("%d => %s\n", JOB_MECHANIC_T2, inter->job_name(JOB_MECHANIC_T2));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT3, inter->job_name(JOB_RUNE_KNIGHT3));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT4, inter->job_name(JOB_RUNE_KNIGHT4));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT5, inter->job_name(JOB_RUNE_KNIGHT5));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT6, inter->job_name(JOB_RUNE_KNIGHT6));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT7, inter->job_name(JOB_RUNE_KNIGHT7));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT8, inter->job_name(JOB_RUNE_KNIGHT8));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT9, inter->job_name(JOB_RUNE_KNIGHT9));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT10, inter->job_name(JOB_RUNE_KNIGHT10));
		ShowMessage("%d => %s\n", JOB_BABY_RUNE2, inter->job_name(JOB_BABY_RUNE2));
		ShowMessage("%d => %s\n", JOB_BABY_GUARD2, inter->job_name(JOB_BABY_GUARD2));
		ShowMessage("%d => %s\n", JOB_BABY_RANGER2, inter->job_name(JOB_BABY_RANGER2));
		ShowMessage("%d => %s\n", JOB_BABY_MECHANIC2, inter->job_name(JOB_BABY_MECHANIC2));
		ShowMessage("%d => %s\n", JOB_THIRD_LAST, inter->job_name(JOB_THIRD_LAST));
		ShowMessage("%d => %s\n", JOB_BABY_STAR_GLADIATOR2, inter->job_name(JOB_BABY_STAR_GLADIATOR2));
		ShowMessage("%d => %s\n", JOB_DUMMY4219, inter->job_name(JOB_DUMMY4219));
		ShowMessage("%d => %s\n", JOB_DUMMY4221, inter->job_name(JOB_DUMMY4221));
		ShowMessage("%d => %s\n", JOB_DUMMY4230, inter->job_name(JOB_DUMMY4230));
		ShowMessage("%d => %s\n", JOB_DUMMY4231, inter->job_name(JOB_DUMMY4231));
		ShowMessage("%d => %s\n", JOB_DUMMY4232, inter->job_name(JOB_DUMMY4232));
		ShowMessage("%d => %s\n", JOB_DUMMY4233, inter->job_name(JOB_DUMMY4233));
		ShowMessage("%d => %s\n", JOB_DUMMY4234, inter->job_name(JOB_DUMMY4234));
		ShowMessage("%d => %s\n", JOB_DUMMY4235, inter->job_name(JOB_DUMMY4235));
		ShowMessage("%d => %s\n", JOB_DUMMY4236, inter->job_name(JOB_DUMMY4236));
		ShowMessage("%d => %s\n", JOB_DUMMY4237, inter->job_name(JOB_DUMMY4237));
		ShowMessage("===============================================================================\n");
	} else if (SERVER_TYPE == SERVER_TYPE_MAP) {
		ShowMessage("--------------- pc.c - pc_job_name\n");
		ShowMessage("%d => %s\n", JOB_NOVICE, pc->job_name(JOB_NOVICE));
		ShowMessage("%d => %s\n", JOB_SWORDMAN, pc->job_name(JOB_SWORDMAN));
		ShowMessage("%d => %s\n", JOB_MAGE, pc->job_name(JOB_MAGE));
		ShowMessage("%d => %s\n", JOB_ARCHER, pc->job_name(JOB_ARCHER));
		ShowMessage("%d => %s\n", JOB_ACOLYTE, pc->job_name(JOB_ACOLYTE));
		ShowMessage("%d => %s\n", JOB_MERCHANT, pc->job_name(JOB_MERCHANT));
		ShowMessage("%d => %s\n", JOB_THIEF, pc->job_name(JOB_THIEF));
		ShowMessage("%d => %s\n", JOB_KNIGHT, pc->job_name(JOB_KNIGHT));
		ShowMessage("%d => %s\n", JOB_PRIEST, pc->job_name(JOB_PRIEST));
		ShowMessage("%d => %s\n", JOB_WIZARD, pc->job_name(JOB_WIZARD));
		ShowMessage("%d => %s\n", JOB_BLACKSMITH, pc->job_name(JOB_BLACKSMITH));
		ShowMessage("%d => %s\n", JOB_HUNTER, pc->job_name(JOB_HUNTER));
		ShowMessage("%d => %s\n", JOB_ASSASSIN, pc->job_name(JOB_ASSASSIN));
		ShowMessage("%d => %s\n", JOB_CRUSADER, pc->job_name(JOB_CRUSADER));
		ShowMessage("%d => %s\n", JOB_MONK, pc->job_name(JOB_MONK));
		ShowMessage("%d => %s\n", JOB_SAGE, pc->job_name(JOB_SAGE));
		ShowMessage("%d => %s\n", JOB_ROGUE, pc->job_name(JOB_ROGUE));
		ShowMessage("%d => %s\n", JOB_ALCHEMIST, pc->job_name(JOB_ALCHEMIST));
		ShowMessage("%d => %s\n", JOB_WEDDING, pc->job_name(JOB_WEDDING));
		ShowMessage("%d => %s\n", JOB_SUPER_NOVICE, pc->job_name(JOB_SUPER_NOVICE));
		ShowMessage("%d => %s\n", JOB_GUNSLINGER, pc->job_name(JOB_GUNSLINGER));
		ShowMessage("%d => %s\n", JOB_NINJA, pc->job_name(JOB_NINJA));
		ShowMessage("%d => %s\n", JOB_XMAS, pc->job_name(JOB_XMAS));
		ShowMessage("%d => %s\n", JOB_SUMMER, pc->job_name(JOB_SUMMER));
		ShowMessage("%d => %s\n", JOB_NOVICE_HIGH, pc->job_name(JOB_NOVICE_HIGH));
		ShowMessage("%d => %s\n", JOB_SWORDMAN_HIGH, pc->job_name(JOB_SWORDMAN_HIGH));
		ShowMessage("%d => %s\n", JOB_MAGE_HIGH, pc->job_name(JOB_MAGE_HIGH));
		ShowMessage("%d => %s\n", JOB_ARCHER_HIGH, pc->job_name(JOB_ARCHER_HIGH));
		ShowMessage("%d => %s\n", JOB_ACOLYTE_HIGH, pc->job_name(JOB_ACOLYTE_HIGH));
		ShowMessage("%d => %s\n", JOB_MERCHANT_HIGH, pc->job_name(JOB_MERCHANT_HIGH));
		ShowMessage("%d => %s\n", JOB_THIEF_HIGH, pc->job_name(JOB_THIEF_HIGH));
		ShowMessage("%d => %s\n", JOB_LORD_KNIGHT, pc->job_name(JOB_LORD_KNIGHT));
		ShowMessage("%d => %s\n", JOB_HIGH_PRIEST, pc->job_name(JOB_HIGH_PRIEST));
		ShowMessage("%d => %s\n", JOB_HIGH_WIZARD, pc->job_name(JOB_HIGH_WIZARD));
		ShowMessage("%d => %s\n", JOB_WHITESMITH, pc->job_name(JOB_WHITESMITH));
		ShowMessage("%d => %s\n", JOB_SNIPER, pc->job_name(JOB_SNIPER));
		ShowMessage("%d => %s\n", JOB_ASSASSIN_CROSS, pc->job_name(JOB_ASSASSIN_CROSS));
		ShowMessage("%d => %s\n", JOB_PALADIN, pc->job_name(JOB_PALADIN));
		ShowMessage("%d => %s\n", JOB_CHAMPION, pc->job_name(JOB_CHAMPION));
		ShowMessage("%d => %s\n", JOB_PROFESSOR, pc->job_name(JOB_PROFESSOR));
		ShowMessage("%d => %s\n", JOB_STALKER, pc->job_name(JOB_STALKER));
		ShowMessage("%d => %s\n", JOB_CREATOR, pc->job_name(JOB_CREATOR));
		ShowMessage("%d => %s\n", JOB_BABY, pc->job_name(JOB_BABY));
		ShowMessage("%d => %s\n", JOB_BABY_SWORDMAN, pc->job_name(JOB_BABY_SWORDMAN));
		ShowMessage("%d => %s\n", JOB_BABY_MAGE, pc->job_name(JOB_BABY_MAGE));
		ShowMessage("%d => %s\n", JOB_BABY_ARCHER, pc->job_name(JOB_BABY_ARCHER));
		ShowMessage("%d => %s\n", JOB_BABY_ACOLYTE, pc->job_name(JOB_BABY_ACOLYTE));
		ShowMessage("%d => %s\n", JOB_BABY_MERCHANT, pc->job_name(JOB_BABY_MERCHANT));
		ShowMessage("%d => %s\n", JOB_BABY_THIEF, pc->job_name(JOB_BABY_THIEF));
		ShowMessage("%d => %s\n", JOB_BABY_KNIGHT, pc->job_name(JOB_BABY_KNIGHT));
		ShowMessage("%d => %s\n", JOB_BABY_PRIEST, pc->job_name(JOB_BABY_PRIEST));
		ShowMessage("%d => %s\n", JOB_BABY_WIZARD, pc->job_name(JOB_BABY_WIZARD));
		ShowMessage("%d => %s\n", JOB_BABY_BLACKSMITH, pc->job_name(JOB_BABY_BLACKSMITH));
		ShowMessage("%d => %s\n", JOB_BABY_HUNTER, pc->job_name(JOB_BABY_HUNTER));
		ShowMessage("%d => %s\n", JOB_BABY_ASSASSIN, pc->job_name(JOB_BABY_ASSASSIN));
		ShowMessage("%d => %s\n", JOB_BABY_CRUSADER, pc->job_name(JOB_BABY_CRUSADER));
		ShowMessage("%d => %s\n", JOB_BABY_MONK, pc->job_name(JOB_BABY_MONK));
		ShowMessage("%d => %s\n", JOB_BABY_SAGE, pc->job_name(JOB_BABY_SAGE));
		ShowMessage("%d => %s\n", JOB_BABY_ROGUE, pc->job_name(JOB_BABY_ROGUE));
		ShowMessage("%d => %s\n", JOB_BABY_ALCHEMIST, pc->job_name(JOB_BABY_ALCHEMIST));
		ShowMessage("%d => %s\n", JOB_SUPER_BABY, pc->job_name(JOB_SUPER_BABY));
		ShowMessage("%d => %s\n", JOB_TAEKWON, pc->job_name(JOB_TAEKWON));
		ShowMessage("%d => %s\n", JOB_STAR_GLADIATOR, pc->job_name(JOB_STAR_GLADIATOR));
		ShowMessage("%d => %s\n", JOB_SOUL_LINKER, pc->job_name(JOB_SOUL_LINKER));
		ShowMessage("%d => %s\n", JOB_GANGSI, pc->job_name(JOB_GANGSI));
		ShowMessage("%d => %s\n", JOB_DEATH_KNIGHT, pc->job_name(JOB_DEATH_KNIGHT));
		ShowMessage("%d => %s\n", JOB_DARK_COLLECTOR, pc->job_name(JOB_DARK_COLLECTOR));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT, pc->job_name(JOB_RUNE_KNIGHT));
		ShowMessage("%d => %s\n", JOB_WARLOCK, pc->job_name(JOB_WARLOCK));
		ShowMessage("%d => %s\n", JOB_RANGER, pc->job_name(JOB_RANGER));
		ShowMessage("%d => %s\n", JOB_ARCH_BISHOP, pc->job_name(JOB_ARCH_BISHOP));
		ShowMessage("%d => %s\n", JOB_MECHANIC, pc->job_name(JOB_MECHANIC));
		ShowMessage("%d => %s\n", JOB_GUILLOTINE_CROSS, pc->job_name(JOB_GUILLOTINE_CROSS));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT_T, pc->job_name(JOB_RUNE_KNIGHT_T));
		ShowMessage("%d => %s\n", JOB_WARLOCK_T, pc->job_name(JOB_WARLOCK_T));
		ShowMessage("%d => %s\n", JOB_RANGER_T, pc->job_name(JOB_RANGER_T));
		ShowMessage("%d => %s\n", JOB_ARCH_BISHOP_T, pc->job_name(JOB_ARCH_BISHOP_T));
		ShowMessage("%d => %s\n", JOB_MECHANIC_T, pc->job_name(JOB_MECHANIC_T));
		ShowMessage("%d => %s\n", JOB_GUILLOTINE_CROSS_T, pc->job_name(JOB_GUILLOTINE_CROSS_T));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD, pc->job_name(JOB_ROYAL_GUARD));
		ShowMessage("%d => %s\n", JOB_SORCERER, pc->job_name(JOB_SORCERER));
		ShowMessage("%d => %s\n", JOB_SURA, pc->job_name(JOB_SURA));
		ShowMessage("%d => %s\n", JOB_GENETIC, pc->job_name(JOB_GENETIC));
		ShowMessage("%d => %s\n", JOB_SHADOW_CHASER, pc->job_name(JOB_SHADOW_CHASER));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD_T, pc->job_name(JOB_ROYAL_GUARD_T));
		ShowMessage("%d => %s\n", JOB_SORCERER_T, pc->job_name(JOB_SORCERER_T));
		ShowMessage("%d => %s\n", JOB_SURA_T, pc->job_name(JOB_SURA_T));
		ShowMessage("%d => %s\n", JOB_GENETIC_T, pc->job_name(JOB_GENETIC_T));
		ShowMessage("%d => %s\n", JOB_SHADOW_CHASER_T, pc->job_name(JOB_SHADOW_CHASER_T));
		ShowMessage("%d => %s\n", JOB_BABY_RUNE, pc->job_name(JOB_BABY_RUNE));
		ShowMessage("%d => %s\n", JOB_BABY_WARLOCK, pc->job_name(JOB_BABY_WARLOCK));
		ShowMessage("%d => %s\n", JOB_BABY_RANGER, pc->job_name(JOB_BABY_RANGER));
		ShowMessage("%d => %s\n", JOB_BABY_BISHOP, pc->job_name(JOB_BABY_BISHOP));
		ShowMessage("%d => %s\n", JOB_BABY_MECHANIC, pc->job_name(JOB_BABY_MECHANIC));
		ShowMessage("%d => %s\n", JOB_BABY_CROSS, pc->job_name(JOB_BABY_CROSS));
		ShowMessage("%d => %s\n", JOB_BABY_GUARD, pc->job_name(JOB_BABY_GUARD));
		ShowMessage("%d => %s\n", JOB_BABY_SORCERER, pc->job_name(JOB_BABY_SORCERER));
		ShowMessage("%d => %s\n", JOB_BABY_SURA, pc->job_name(JOB_BABY_SURA));
		ShowMessage("%d => %s\n", JOB_BABY_GENETIC, pc->job_name(JOB_BABY_GENETIC));
		ShowMessage("%d => %s\n", JOB_BABY_CHASER, pc->job_name(JOB_BABY_CHASER));
		ShowMessage("%d => %s\n", JOB_SUPER_NOVICE_E, pc->job_name(JOB_SUPER_NOVICE_E));
		ShowMessage("%d => %s\n", JOB_SUPER_BABY_E, pc->job_name(JOB_SUPER_BABY_E));
		ShowMessage("%d => %s\n", JOB_REBELLION, pc->job_name(JOB_REBELLION));
		ShowMessage("%d => %s\n", JOB_SUMMONER, pc->job_name(JOB_SUMMONER));
		ShowMessage("%d => %s\n", JOB_BABY_SUMMONER, pc->job_name(JOB_BABY_SUMMONER));
		ShowMessage("%d => %s\n", JOB_BABY_NINJA, pc->job_name(JOB_BABY_NINJA));
		ShowMessage("%d => %s\n", JOB_BABY_TAEKWON, pc->job_name(JOB_BABY_TAEKWON));
		ShowMessage("%d => %s\n", JOB_BABY_STAR_GLADIATOR, pc->job_name(JOB_BABY_STAR_GLADIATOR));
		ShowMessage("%d => %s\n", JOB_BABY_SOUL_LINKER, pc->job_name(JOB_BABY_SOUL_LINKER));
		ShowMessage("%d => %s\n", JOB_BABY_GUNSLINGER, pc->job_name(JOB_BABY_GUNSLINGER));
		ShowMessage("%d => %s\n", JOB_BABY_REBELLION, pc->job_name(JOB_BABY_REBELLION));
		ShowMessage("%d => %s\n", JOB_STAR_EMPEROR, pc->job_name(JOB_STAR_EMPEROR));
		ShowMessage("%d => %s\n", JOB_SOUL_REAPER, pc->job_name(JOB_SOUL_REAPER));
		ShowMessage("%d => %s\n", JOB_BABY_STAR_EMPEROR, pc->job_name(JOB_BABY_STAR_EMPEROR));
		ShowMessage("%d => %s\n", JOB_BABY_SOUL_REAPER, pc->job_name(JOB_BABY_SOUL_REAPER));
		ShowMessage("%d => %s\n", JOB_BARD, pc->job_name(JOB_BARD));
		ShowMessage("%d => %s\n", JOB_DANCER, pc->job_name(JOB_DANCER));
		ShowMessage("%d => %s\n", JOB_MAX_BASIC, pc->job_name(JOB_MAX_BASIC));
		ShowMessage("%d => %s\n", JOB_2004_BEGIN, pc->job_name(JOB_2004_BEGIN));
		ShowMessage("%d => %s\n", JOB_CLOWN, pc->job_name(JOB_CLOWN));
		ShowMessage("%d => %s\n", JOB_GYPSY, pc->job_name(JOB_GYPSY));
		ShowMessage("%d => %s\n", JOB_KAGEROU, pc->job_name(JOB_KAGEROU));
		ShowMessage("%d => %s\n", JOB_OBORO, pc->job_name(JOB_OBORO));
		ShowMessage("%d => %s\n", JOB_BABY_KAGEROU, pc->job_name(JOB_BABY_KAGEROU));
		ShowMessage("%d => %s\n", JOB_BABY_OBORO, pc->job_name(JOB_BABY_OBORO));
		ShowMessage("%d => %s\n", JOB_BABY_BARD, pc->job_name(JOB_BABY_BARD));
		ShowMessage("%d => %s\n", JOB_BABY_DANCER, pc->job_name(JOB_BABY_DANCER));
		ShowMessage("%d => %s\n", JOB_MINSTREL, pc->job_name(JOB_MINSTREL));
		ShowMessage("%d => %s\n", JOB_WANDERER, pc->job_name(JOB_WANDERER));
		ShowMessage("%d => %s\n", JOB_MINSTREL_T, pc->job_name(JOB_MINSTREL_T));
		ShowMessage("%d => %s\n", JOB_WANDERER_T, pc->job_name(JOB_WANDERER_T));
		ShowMessage("%d => %s\n", JOB_BABY_MINSTREL, pc->job_name(JOB_BABY_MINSTREL));
		ShowMessage("%d => %s\n", JOB_BABY_WANDERER, pc->job_name(JOB_BABY_WANDERER));
		ShowMessage("%d => %s\n", JOB_KNIGHT2, pc->job_name(JOB_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_CRUSADER2, pc->job_name(JOB_CRUSADER2));
		ShowMessage("%d => %s\n", JOB_LORD_KNIGHT2, pc->job_name(JOB_LORD_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_PALADIN2, pc->job_name(JOB_PALADIN2));
		ShowMessage("%d => %s\n", JOB_BABY_KNIGHT2, pc->job_name(JOB_BABY_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_BABY_CRUSADER2, pc->job_name(JOB_BABY_CRUSADER2));
		ShowMessage("%d => %s\n", JOB_STAR_GLADIATOR2, pc->job_name(JOB_STAR_GLADIATOR2));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT2, pc->job_name(JOB_RUNE_KNIGHT2));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT_T2, pc->job_name(JOB_RUNE_KNIGHT_T2));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD2, pc->job_name(JOB_ROYAL_GUARD2));
		ShowMessage("%d => %s\n", JOB_ROYAL_GUARD_T2, pc->job_name(JOB_ROYAL_GUARD_T2));
		ShowMessage("%d => %s\n", JOB_RANGER2, pc->job_name(JOB_RANGER2));
		ShowMessage("%d => %s\n", JOB_RANGER_T2, pc->job_name(JOB_RANGER_T2));
		ShowMessage("%d => %s\n", JOB_MECHANIC2, pc->job_name(JOB_MECHANIC2));
		ShowMessage("%d => %s\n", JOB_MECHANIC_T2, pc->job_name(JOB_MECHANIC_T2));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT3, pc->job_name(JOB_RUNE_KNIGHT3));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT4, pc->job_name(JOB_RUNE_KNIGHT4));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT5, pc->job_name(JOB_RUNE_KNIGHT5));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT6, pc->job_name(JOB_RUNE_KNIGHT6));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT7, pc->job_name(JOB_RUNE_KNIGHT7));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT8, pc->job_name(JOB_RUNE_KNIGHT8));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT9, pc->job_name(JOB_RUNE_KNIGHT9));
		ShowMessage("%d => %s\n", JOB_RUNE_KNIGHT10, pc->job_name(JOB_RUNE_KNIGHT10));
		ShowMessage("%d => %s\n", JOB_BABY_RUNE2, pc->job_name(JOB_BABY_RUNE2));
		ShowMessage("%d => %s\n", JOB_BABY_GUARD2, pc->job_name(JOB_BABY_GUARD2));
		ShowMessage("%d => %s\n", JOB_BABY_RANGER2, pc->job_name(JOB_BABY_RANGER2));
		ShowMessage("%d => %s\n", JOB_BABY_MECHANIC2, pc->job_name(JOB_BABY_MECHANIC2));
		ShowMessage("%d => %s\n", JOB_THIRD_LAST, pc->job_name(JOB_THIRD_LAST));
		ShowMessage("%d => %s\n", JOB_BABY_STAR_GLADIATOR2, pc->job_name(JOB_BABY_STAR_GLADIATOR2));
		ShowMessage("%d => %s\n", JOB_DUMMY4219, pc->job_name(JOB_DUMMY4219));
		ShowMessage("%d => %s\n", JOB_DUMMY4221, pc->job_name(JOB_DUMMY4221));
		ShowMessage("%d => %s\n", JOB_DUMMY4230, pc->job_name(JOB_DUMMY4230));
		ShowMessage("%d => %s\n", JOB_DUMMY4231, pc->job_name(JOB_DUMMY4231));
		ShowMessage("%d => %s\n", JOB_DUMMY4232, pc->job_name(JOB_DUMMY4232));
		ShowMessage("%d => %s\n", JOB_DUMMY4233, pc->job_name(JOB_DUMMY4233));
		ShowMessage("%d => %s\n", JOB_DUMMY4234, pc->job_name(JOB_DUMMY4234));
		ShowMessage("%d => %s\n", JOB_DUMMY4235, pc->job_name(JOB_DUMMY4235));
		ShowMessage("%d => %s\n", JOB_DUMMY4236, pc->job_name(JOB_DUMMY4236));
		ShowMessage("%d => %s\n", JOB_DUMMY4237, pc->job_name(JOB_DUMMY4237));
		ShowMessage("===============================================================================\n");
	}
}
