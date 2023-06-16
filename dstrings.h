//
// Copyright (C) 1993-1996 Id Software, Inc.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef __DSTRINGS__
#define __DSTRINGS__

#ifdef FRENCH
#include "d_french.h"
#else
//
//	Printed strings for translation
//

//
// D_Main.C
//
#define D_DEVSTR	"Development mode ON.\n"
#define D_CDROM	"CD-ROM Version: default.cfg from c:\\doomdata\n"

//
//	M_Menu.C
//
#define PRESSKEY 	"press a key."
#define PRESSYN 	"press y or n."
#define QUITMSG	"AGM's investors are planning\nan even worse nightmare.\nPress Y if you don't care."
#define LOADNET 	"you can't do load while in a net game!\n\n"PRESSKEY
#define QLOADNET	"you can't quickload during a netgame!\n\n"PRESSKEY
#define QSAVESPOT	"you haven't picked a quicksave slot yet!\n\n"PRESSKEY
#define SAVEDEAD 	"you can't save if you aren't playing!\n\n"PRESSKEY
#define QSPROMPT 	"quicksave over your game named\n\n'%s'?\n\n"PRESSYN
#define QLPROMPT	"do you want to quickload the game named\n\n'%s'?\n\n"PRESSYN

#define NEWGAME	\
"you can't start a new game\n"\
"while in a network game.\n\n"PRESSKEY

#define NIGHTMARE	\
"The game is not designed to be\n"\
"beatable at this skill level.\n\n"\
"Not recommended unless you're\n"\
"really that good - or bored.\n"\
"(Press Y to confirm)\n\n"PRESSYN

#define SWSTRING	\
"this is the shareware version of doom.\n\n"\
"you need to order the entire trilogy.\n\n"PRESSKEY

#define MSGOFF	"Messages OFF"
#define MSGON		"Messages ON"
#define NETEND	"you can't end a netgame!\n\n"PRESSKEY
#define ENDGAME	"are you sure you want to end the game?\n\n"PRESSYN

#define DOSY		"(Press Y to exit the program.)"

#define DETAILHI	"High detail"
#define DETAILLO	"Low detail"
#define GAMMALVL0	"Gamma correction OFF"
#define GAMMALVL1	"Gamma correction level 1"
#define GAMMALVL2	"Gamma correction level 2"
#define GAMMALVL3	"Gamma correction level 3"
#define GAMMALVL4	"Gamma correction level 4"
#define EMPTYSTRING	"empty slot"

//
//	P_inter.C
//
#define GOTARMOR	"Picked up some basic infantry armor."
#define GOTMEGA	"Picked up some heavy assault armor."
#define GOTHTHBONUS	"Picked up a life charge."
#define GOTARMBONUS	"Picked up an armor charge."
#define GOTSTIM	"Picked up a small health pack."
#define GOTMEDINEED	"Found a large health pack, just in time!"
#define GOTMEDIKIT	"Picked up a large health pack."
#define GOTSUPER	"Life surge!"

#define GOTBLUECARD	"Picked up a blue passcard."
#define GOTYELWCARD	"Picked up a yellow passcard."
#define GOTREDCARD	"Picked up a red passcard."
#define GOTBLUESKUL	"Picked up a blue skeleton key."
#define GOTYELWSKUL	"Picked up a yellow skeleton key."
#define GOTREDSKULL	"Picked up a red skeleton key."

#define GOTINVUL	"Vanguard of the gods!"
#define GOTBERSERK	"Smash them to pieces!"
#define GOTINVIS	"Invisibility!"
#define GOTSUIT	"Rescue operations suit."
#define GOTMAP	"Area survey map."
#define GOTVISOR	"Low-light goggles."
#define GOTMSPHERE	"Maximum power!"

#define GOTCLIP	"Picked up an ammo clip."
#define GOTCLIPBOX	"Picked up a box of ammo."
#define GOTROCKET	"Picked up a missile."
#define GOTROCKBOX	"Picked up a crate of missiles."
#define GOTCELL	"Picked up a small energy recharge."
#define GOTCELLBOX	"Picked up a large energy recharge."
#define GOTSHELLS	"Picked up some shotgun shells."
#define GOTSHELLBOX	"Picked up a box of shotgun shells."
#define GOTBACKPACK	"You found a backpack!"

#define GOTBFG9000	"The SKAG 1337 ... time to kick some ass!"
#define GOTCHAINGUN	"You got the minigun!"
#define GOTCHAINSAW	"You got the angle grinder!"
#define GOTLAUNCHER	"You got the missile launcher!"
#define GOTPLASMA	"You got the polaric energy weapon!"
#define GOTSHOTGUN	"You got the pump-action shotgun!"
#define GOTSHOTGUN2	"You got the double-barrelled shotgun!"

//
// P_Doors.C
//
#define PD_BLUEO	"This object requires a blue key."
#define PD_REDO	"This object requires a red key."
#define PD_YELLOWO	"This object requires a yellow key."
#define PD_BLUEK	"This door requires a blue key."
#define PD_REDK	"This door requires a red key."
#define PD_YELLOWK	"This door requires a yellow key."

//
//	G_game.C
//
#define GGSAVED	"game saved."

//
//	HU_stuff.C
//
#define HUSTR_MSGU	"[Message unsent]"

#define HUSTR_E1M1	"E1M1: Outer Prison"
#define HUSTR_E1M2	"E1M2: Communications Center"
#define HUSTR_E1M3	"E1M3: Waste Disposal"
#define HUSTR_E1M4	"E1M4: Supply Depot"
#define HUSTR_E1M5	"E1M5: Armory"
#define HUSTR_E1M6	"E1M6: Training Facility"
#define HUSTR_E1M7	"E1M7: Transportation Bay"
#define HUSTR_E1M8	"E1M8: Outpost Quarry"
#define HUSTR_E1M9	"E1M9: Nutrient Recycling"

#define HUSTR_E2M1	"E2M1: Surreality"
#define HUSTR_E2M2	"E2M2: Shifter"
#define HUSTR_E2M3	"E2M3: Reclaimed Facilities"
#define HUSTR_E2M4	"E2M4: Flooded Installation"
#define HUSTR_E2M5	"E2M5: Underground Hub"
#define HUSTR_E2M6	"E2M6: Hidden Sector"
#define HUSTR_E2M7	"E2M7: Control Complex"
#define HUSTR_E2M8	"E2M8: Containment Cell"
#define HUSTR_E2M9	"E2M9: Fortress 31"

#define HUSTR_E3M1	"E3M1: Land of the Lost"
#define HUSTR_E3M2	"E3M2: Derelict Temple"
#define HUSTR_E3M3	"E3M3: Sacrificial Bastion"
#define HUSTR_E3M4	"E3M4: Oblation Temple"
#define HUSTR_E3M5	"E3M5: Infernal Hallows"
#define HUSTR_E3M6	"E3M6: Igneous Intrusion"
#define HUSTR_E3M7	"E3M7: No Regrets"
#define HUSTR_E3M8	"E3M8: Ancient Lair"
#define HUSTR_E3M9	"E3M9: Acquainted With Grief"

#define HUSTR_E4M1	"E4M1: Maintenance Area"
#define HUSTR_E4M2	"E4M2: Research Complex"
#define HUSTR_E4M3	"E4M3: Central Computing"
#define HUSTR_E4M4	"E4M4: Hydroponic Facility"
#define HUSTR_E4M5	"E4M5: Engineering Station"
#if (APPVER_DOOMREV >= AV_DR_DM19U)
#define HUSTR_E4M6	"E4M6: Command Center"
#define HUSTR_E4M7	"E4M7: Waste Treatment"
#define HUSTR_E4M8	"E4M8: Launch Bay"
#define HUSTR_E4M9	"E4M9: Operations"
#endif

#define HUSTR_1	"MAP01: Hydroelectric Plant"
#define HUSTR_2	"MAP02: Filtration Tunnels"
#define HUSTR_3	"MAP03: Crude Processing Center"
#define HUSTR_4	"MAP04: Containment Bay"
#define HUSTR_5	"MAP05: Sludge Burrow"
#define HUSTR_6	"MAP06: Gamma Labs"
#define HUSTR_7	"MAP07: Outer Storage Warehouse"
#define HUSTR_8	"MAP08: Astronomy Complex"
#define HUSTR_9	"MAP09: Datacenter"
#define HUSTR_10	"MAP10: Deadly Outlands"
#define HUSTR_11	"MAP11: Dimensional Rift Observatory"

#define HUSTR_12	"MAP12: Railroads"
#define HUSTR_13	"MAP13: Station Earth"
#define HUSTR_14	"MAP14: Nuclear Zone"
#define HUSTR_15	"MAP15: Hostile Takeover"
#define HUSTR_16	"MAP16: Urban Jungle"
#define HUSTR_17	"MAP17: City Capitol"
#define HUSTR_18	"MAP18: Aquatics Lab"
#define HUSTR_19	"MAP19: Sewage Control"
#define HUSTR_20	"MAP20: Blood Ember Fortress"

#define HUSTR_21	"MAP21: Under Realm"
#define HUSTR_22	"MAP22: Remanasu"
#define HUSTR_23	"MAP23: Underground Facility"
#define HUSTR_24	"MAP24: Tertiary Loading Bay"
#define HUSTR_25	"MAP25: Red Works"
#define HUSTR_26	"MAP26: Dark Depths"
#define HUSTR_27	"MAP27: Palace of Red"
#define HUSTR_28	"MAP28: Grim Redoubt"
#define HUSTR_29	"MAP29: Last Stand"
#define HUSTR_30	"MAP30: Jaws of Defeat"

#define HUSTR_31	"MAP31: Be Quiet"
#define HUSTR_32	"MAP32: Not Sure"

#if (APPVER_DOOMREV >= AV_DR_DM19F)
#define PHUSTR_1	"MAP01"
#define PHUSTR_2	"MAP02"
#define PHUSTR_3	"MAP03"
#define PHUSTR_4	"MAP04"
#define PHUSTR_5	"MAP05"
#define PHUSTR_6	"MAP06"
#define PHUSTR_7	"MAP07"
#define PHUSTR_8	"MAP08"
#define PHUSTR_9	"MAP09"
#define PHUSTR_10	"MAP10"
#define PHUSTR_11	"MAP11"

#define PHUSTR_12	"MAP12"
#define PHUSTR_13	"MAP13"
#define PHUSTR_14	"MAP14"
#define PHUSTR_15	"MAP15"
#define PHUSTR_16	"MAP16"
#define PHUSTR_17	"MAP17"
#define PHUSTR_18	"MAP18"
#define PHUSTR_19	"MAP19"
#define PHUSTR_20	"MAP20"

#define PHUSTR_21	"MAP21"
#define PHUSTR_22	"MAP22"
#define PHUSTR_23	"MAP23"
#define PHUSTR_24	"MAP24"
#define PHUSTR_25	"MAP25"
#define PHUSTR_26	"MAP26"
#define PHUSTR_27	"MAP27"
#define PHUSTR_28	"MAP28"
#define PHUSTR_29	"MAP29"
#define PHUSTR_30	"MAP30"

#define PHUSTR_31	"MAP31"
#define PHUSTR_32	"MAP32"

#define THUSTR_1	"MAP01"
#define THUSTR_2	"MAP02"
#define THUSTR_3	"MAP03"
#define THUSTR_4	"MAP04"
#define THUSTR_5	"MAP05"
#define THUSTR_6	"MAP06"
#define THUSTR_7	"MAP07"
#define THUSTR_8	"MAP08"
#define THUSTR_9	"MAP09"
#define THUSTR_10	"MAP10"
#define THUSTR_11	"MAP11"

#define THUSTR_12	"MAP12"
#define THUSTR_13	"MAP13"
#define THUSTR_14	"MAP14"
#define THUSTR_15	"MAP15"
#define THUSTR_16	"MAP16"
#define THUSTR_17	"MAP17"
#define THUSTR_18	"MAP18"
#define THUSTR_19	"MAP19"
#define THUSTR_20	"MAP20"

#define THUSTR_21	"MAP21"
#define THUSTR_22	"MAP22"
#define THUSTR_23	"MAP23"
#define THUSTR_24	"MAP24"
#define THUSTR_25	"MAP25"
#define THUSTR_26	"MAP26"
#define THUSTR_27	"MAP27"
#define THUSTR_28	"MAP28"
#define THUSTR_29	"MAP29"
#define THUSTR_30	"MAP30"

#define THUSTR_31	"MAP31"
#define THUSTR_32	"MAP32"
#endif // APPVER_DOOMREV >= AV_DR_DM19F

#define HUSTR_CHATMACRO1	"I'm ready to kick butt!"
#define HUSTR_CHATMACRO2	"I'm OK."
#define HUSTR_CHATMACRO3	"I'm not looking too good!"
#define HUSTR_CHATMACRO4	"Help!"
#define HUSTR_CHATMACRO5	"You suck!"
#define HUSTR_CHATMACRO6	"Next time, scumbag..."
#define HUSTR_CHATMACRO7	"Come here!"
#define HUSTR_CHATMACRO8	"I'll take care of it."
#define HUSTR_CHATMACRO9	"Yes"
#define HUSTR_CHATMACRO0	"No"

#define HUSTR_TALKTOSELF1	"You mumble to yourself"
#define HUSTR_TALKTOSELF2	"Who's there?"
#define HUSTR_TALKTOSELF3	"You scare yourself"
#define HUSTR_TALKTOSELF4	"You start to rave"
#define HUSTR_TALKTOSELF5	"You've lost it..."

#define HUSTR_MESSAGESENT	"[Message Sent]"

// The following should NOT be changed unless it seems
// just AWFULLY necessary

#define HUSTR_PLRGREEN	"Green: "
#define HUSTR_PLRINDIGO	"Indigo: "
#define HUSTR_PLRBROWN	"Brown: "
#define HUSTR_PLRRED		"Red: "

#define HUSTR_KEYGREEN	'g:'
#define HUSTR_KEYINDIGO	'i:'
#define HUSTR_KEYBROWN	'b:'
#define HUSTR_KEYRED	'r:'

//
//	AM_map.C
//

#define AMSTR_FOLLOWON	"Map following player."
#define AMSTR_FOLLOWOFF	"Map no longer following player."

#define AMSTR_GRIDON	"Map grid on."
#define AMSTR_GRIDOFF	"Map grid off."

#define AMSTR_MARKEDSPOT	"Added map bookmark."
#define AMSTR_MARKSCLEARED	"All map bookmarks cleared."

//
//	ST_stuff.C
//

#define STSTR_MUS		"Music changed."
#define STSTR_NOMUS		"Unknown music track?"
#define STSTR_DQDON		"God mode on."
#define STSTR_DQDOFF	"God mode off."

#define STSTR_KFAADDED	"Keys, weapons and ammo added."
#define STSTR_FAADDED	"Weapons and ammo added."

#define STSTR_NCON		"Noclip on."
#define STSTR_NCOFF		"Noclip off."

#define STSTR_BEHOLD	"vanguard, smash, invis, rescue, area or light?"
#define STSTR_BEHOLDX	"Power-up Toggled"

#define STSTR_CHOPPERS	"Vroom!"
#define STSTR_CLEV		"Changing Level..."

//
//	F_Finale.C
//
#define E1TEXT \
"Free at last from that dreadful outpost!\n"\
"But you're still stuck on this rock, with\n"\
"AGM and all their monstrous \"experiments.\"\n"\
"Best not to dwell on what evil horrors\n"\
"they were going to create from you...\n\n"\
"You need a functioning starship to\n"\
"get back to Earth. The best chance at\n"\
"one is the facility they had you in\n"\
"when they first brought you planetside.\n"\
"When they first gave you your powers.\n\n"\
"When the nightmare first began...\n\n"\
"Perfect time for the teleporter to\n"\
"glitch out your gear as you get ready\n"\
"to raid the Military Labs."


#define E2TEXT \
"The massive brutes collapse onto the\n"\
"ground, falling apart bit by bit.\n"\
"The starport is yours.\n\n"\
"But no ship: the launch bay sits empty,\n"\
"leaving only a massive teleporter pad.\n"\
"Limited inorganics. Fixed destination.\n\n"\
"The name suggests it's probably the new\n"\
"AGM ship hub in this remote star cluster.\n"\
"Bastards owe you for what they've done,\n"\
"so what even is interstellar piracy\n"\
"but a bit of D.I.Y. law enforcement?\n\n"\
"You board the platform and fade away.\n"\
"Next stop: Horizon."



#define E3TEXT \
"The abomination explodes into oblivion.\n"\
"What the hell even was that?\n\n"\
"As the shadow sets over this red rock,\n"\
"you realize that you're now trapped here.\n"\
"At least you've got more space in this\n"\
"wasteland than your old cell.\n\n"\
"You kick the corpse in anger, and it feels\n"\
"good. You kick it again, and a remote falls\n"\
"out. You press the button, and hear a click\n"\
"revealing a teleport pad nearby. You look\n"\
"at the gizmo - it says \"To Double Impact.\"\n\n"\
"Wherever or whatever that is, you pray\n"\
"to any listening deity that there's\n"\
"a working ship on the other side."


#if (APPVER_DOOMREV >= AV_DR_DM19U)
#define E4TEXT \
"After yet another army of monsters\n"\
"you manage to find a functioning ship.\n"\
"Looks like freedom is yours.\n\n"\
"You practically melt into the soft\n"\
"pilot's seat, a luxurious welcome\n"\
"as you leave this wretched rock.\n\n"\
"The ship rumbles as she wakes up;\n"\
"you think of Earth as she lifts off.\n\n"\
"Hopefully AGM won't find you there:\n"\
"they've got the outbreak to deal with,\n"\
"so that'll give you some time.\n\n"\
"Destination: Earth!"
#endif


// after level 6, put this:

#define C1TEXT \
"Not even Earth is safe. The monsters show\n"\
"up ahead of you everywhere you run.\n"\
"Where are they even coming from?\n\n"\
"Despite all the other destruction they've\n"\
"wrought, the teleportation infrastructure\n"\
"remains intact - you might be able to\n"\
"get back to civilization this way.\n\n"\
"You find an old pad and boot it up.\n"\
"Connection live. Handshake established.\n\n"\
"Growling and chittering on the intercom.\n\n"\
"Planted your feet.\n"\
"Checked your weapons.\n"\
"Time to punch through."

// After level 11, put this:

#define C2TEXT \
"You didn't find anyone alive. Again.\n\n"\
"The fighting is taking its toll on you.\n"\
"The pain. The brutality. The loneliness.\n"\
"There's got to be a way to somewhere,\n"\
"something that isn't... this.\n\n"\
"A train rumbles in the distance.\n\n"\
"You follow the sound down the empty road\n"\
"and reach the edge of a railyard.\n\n"\
"Trains mean cities.\n"\
"Cities mean people.\n\n"\
"Right?"


// After level 20, put this:

#define C3TEXT \
"Here is no AGM but only monsters.\n"\
"Monsters, no humans and dusty days\n"\
"sleeping in old ruins and eating scraps.\n"\
"No one has escaped this wasteland alive.\n\n"\
"You've been tracking their movements.\n"\
"AGM records and alien scrawlings point\n"\
"to something big worming its way through\n"\
"the entire teleportation network.\n"\
"Sending its nightmare armies of brain-\n"\
"scrambled sapients - including humans -\n"\
"to conquer all known space.\n\n"\
"And now you're fighting at its doorstep.\n\n"\
"This could be the beginning\n"\
"of your freedom - or your doom."


// After level 29, put this:

#define C4TEXT \
"The evil thing becomes unstable.\n"\
"Its final roars echo throughout the room\n"\
"until it crumples into scrap metal.\n\n"\
"A targeting portal opens, blissfully\n"\
"unaware of its master's demise.\n\n"\
"On the other side you see a small town.\n"\
"You ditch your weapons and slip through,\n"\
"leaving AGM and all its horrors behind.\n\n"\
"No one will know who saved them.\n\n"\
"No one will know what happened here.\n\n"\
"No one will ever find you again."



// Before level 31, put this:

#define C5TEXT \
"You step into the teleporter. You feel a\n"\
"familiar flash and... you're in a cage?\n"\
"Jailed?\n\n"\
"There are other cages in here. Occupied.\n"\
"So is this how they capture humans?\n"\
"Or did they set this up specially for you,\n"\
"as a reward for being such a monkey wrench\n"\
"in their plans?\n\n"\
"The guards haven't noticed you - yet.\n"\
"Any noise could mean death. Or worse.\n\n"\
"When they zombify you, are you awake the\n"\
"entire time, locked inside of your brain?\n\n"\
"You'd rather not find out."

// Before level 32, put this:

#define C6TEXT \
"Forcibly uncaged again. Good job.\n\n"\
"But where are you? The air and gravity\n"\
"still feel like whatever hell-rock that\n"\
"strange prison had been on.\n\n"\
"You look around and the layout triggers\n"\
"some old memories from history class.\n\n"\
"This is an arena.\n"\
"Where they send prisoners to die.\n"\
"That wasn't an exit - but an entrance.\n\n"\
"You will find your way back to the city,\n"\
"but it will have to be on the other side\n"\
"of a few homicidal mutants..."


#if (APPVER_DOOMREV >= AV_DR_DM19F)
// after map 06	

#define P1TEXT  \
" "


// after map 11

#define P2TEXT \
" "


// after map 20

#define P3TEXT \
" "

// after map 30

#define P4TEXT \
" "

// before map 31

#define P5TEXT \
" "

// before map 32

#define P6TEXT \
" "


#define T1TEXT \
" "


#define T2TEXT \
" "


#define T3TEXT \
" "

#define T4TEXT \
" "


#define T5TEXT \
" "


#define T6TEXT \
" "
#endif // APPVER_DOOMREV >= AV_DR_DM19F



//
// Character cast strings F_FINALE.C
//
#define CC_ZOMBIE	"zombie"
#define CC_SHOTGUN	"shotgun zombie"
#define CC_HEAVY	"minigun zombie"
#define CC_IMP	"serpentipede"
#define CC_DEMON	"flesh worm"
#define CC_LOST	"hatchling"
#define CC_CACO	"trilobite"
#define CC_HELL	"pain bringer"
#define CC_BARON	"pain lord"
#define CC_ARACH	"technospider"
#define CC_PAIN	"matribite"
#define CC_REVEN	"octaminator"
#define CC_MANCU	"combat slug"
#define CC_ARCH	"necromancer"
#define CC_SPIDER	"large technospider"
#define CC_CYBER	"assault tripod"
#define CC_HERO	"savior of humanity"

#if APPVER_CHEX
#include "d_chex.h"
#endif

#endif

#endif
