/*
===========================================================================

Wolfenstein: Enemy Territory GPL Source Code
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company. 

This file is part of the Wolfenstein: Enemy Territory GPL Source Code (Wolf ET Source Code).  

Wolf ET Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Wolf ET Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Wolf ET Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Wolf: ET Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Wolf ET Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

//===========================================================================
//
// Name:			chars.h
// Function:		bot characteristics
// Programmer:		digibob
// Last update:		2003-03-27
// Tab Size:		4 (real tabs)
//===========================================================================

//unless specified, the higher the number, the better the characteristic, or
//the greater the likelyhood of the characteristic occuring.
//also, if any characteristic is ommited, the default value will be used from
//the file in /bots/default_c.c

//========================================================
//========================================================
//name
#define CHARACTERISTIC_NAME                     0   //string
//gender of the bot
#define CHARACTERISTIC_GENDER                       1   //string ("male", "female", "it")
//attack skill
// >  0.0 && <  0.2 = don't move
// >  0.3 && <  1.0 = aim at enemy during retreat
// >  0.0 && <  0.4 = only move forward/backward
// >= 0.4 && <  1.0 = circle strafing
// >  0.7 && <  1.0 = random strafe direction change
#define CHARACTERISTIC_ATTACK_SKILL                 2   //float [0, 1]
//weapon weight file
#define CHARACTERISTIC_WEAPONWEIGHTS                3   //string
//view angle difference to angle change factor
#define CHARACTERISTIC_VIEW_FACTOR                  4   //float <0, 1]
//maximum view angle change
#define CHARACTERISTIC_VIEW_MAXCHANGE               5   //float [1, 360]
//reaction time in seconds
#define CHARACTERISTIC_REACTIONTIME                 6   //float [0, 5]
//accuracy when aiming
#define CHARACTERISTIC_AIM_ACCURACY                 7   //float [0, 1]
//weapon specific aim accuracy
#define CHARACTERISTIC_AIM_ACCURACY_MACHINEGUN      8   //float [0, 1]
#define CHARACTERISTIC_AIM_ACCURACY_SHOTGUN         9   //float [0, 1]
#define CHARACTERISTIC_AIM_ACCURACY_ROCKETLAUNCHER  10  //float [0, 1]
#define CHARACTERISTIC_AIM_ACCURACY_GRENADELAUNCHER 11  //float [0, 1]
#define CHARACTERISTIC_AIM_ACCURACY_FLAMETHROWER    12
#define CHARACTERISTIC_AIM_ACCURACY_SP5             13  //float [0, 1]
#define CHARACTERISTIC_AIM_ACCURACY_SNIPERRIFLE     14
#define CHARACTERISTIC_AIM_ACCURACY_BFG10K          15  //float [0, 1]
//skill when aiming
// >  0.0 && <  0.9 = aim is affected by enemy movement
// >  0.4 && <= 0.8 = enemy linear leading
// >  0.8 && <= 1.0 = enemy exact movement leading
// >  0.5 && <= 1.0 = prediction shots when enemy is not visible
// >  0.6 && <= 1.0 = splash damage by shooting nearby geometry
#define CHARACTERISTIC_AIM_SKILL                    16  //float [0, 1]
//weapon specific aim skill
#define CHARACTERISTIC_AIM_SKILL_ROCKETLAUNCHER     17  //float [0, 1]
#define CHARACTERISTIC_AIM_SKILL_GRENADELAUNCHER    18  //float [0, 1]
#define CHARACTERISTIC_AIM_SKILL_SP5                19  //float [0, 1]
//#define CHARACTERISTIC_AIM_SKILL_BFG10K				20	//float [0, 1]
#define CHARACTERISTIC_AIM_SKILL_SNIPERRIFLE        20
//========================================================
//chat
//========================================================
//file with chats
#define CHARACTERISTIC_CHAT_FILE                    21  //string
//name of the chat character
#define CHARACTERISTIC_CHAT_NAME                    22  //string
//characters per minute type speed
#define CHARACTERISTIC_CHAT_CPM                     23  //integer [1, 4000]
//tendency to insult/praise
#define CHARACTERISTIC_CHAT_INSULT                  24  //float [0, 1]
//tendency to chat misc
#define CHARACTERISTIC_CHAT_MISC                    25  //float [0, 1]
//tendency to chat at start or end of level
#define CHARACTERISTIC_CHAT_STARTENDLEVEL           26  //float [0, 1]
//tendency to chat entering or exiting the game
#define CHARACTERISTIC_CHAT_ENTEREXITGAME           27  //float [0, 1]
//tendency to chat when killed someone
#define CHARACTERISTIC_CHAT_KILL                    28  //float [0, 1]
//tendency to chat when died
#define CHARACTERISTIC_CHAT_DEATH                   29  //float [0, 1]
//tendency to chat when enemy suicides
#define CHARACTERISTIC_CHAT_ENEMYSUICIDE            30  //float [0, 1]
//tendency to chat when hit while talking
#define CHARACTERISTIC_CHAT_HITTALKING              31  //float [0, 1]
//tendency to chat when bot was hit but didn't dye
#define CHARACTERISTIC_CHAT_HITNODEATH              32  //float [0, 1]
//tendency to chat when bot hit the enemy but enemy didn't dye
#define CHARACTERISTIC_CHAT_HITNOKILL               33  //float [0, 1]
//tendency to randomly chat
#define CHARACTERISTIC_CHAT_RANDOM                  34  //float [0, 1]
//tendency to reply
#define CHARACTERISTIC_CHAT_REPLY                   35  //float [0, 1]
//========================================================
//movement
//========================================================
//tendency to crouch
#define CHARACTERISTIC_CROUCHER                     36  //float [0, 1]
//tendency to jump
#define CHARACTERISTIC_JUMPER                       37  //float [0, 1]
//tendency to walk
#define CHARACTERISTIC_WALKER                       48  //float [0, 1]
//tendency to jump using a weapon
#define CHARACTERISTIC_WEAPONJUMPING                38  //float [0, 1]
//tendency to use the grapple hook when available
#define CHARACTERISTIC_GRAPPLE_USER                 39  //float [0, 1]	//use this!!
//========================================================
//goal
//========================================================
//item weight file
#define CHARACTERISTIC_ITEMWEIGHTS                  40  //string
//the aggression of the bot
#define CHARACTERISTIC_AGGRESSION                   41  //float [0, 1]
//the self preservation of the bot (rockets near walls etc.)
#define CHARACTERISTIC_SELFPRESERVATION             42  //float [0, 1]
//how likely the bot is to take revenge
#define CHARACTERISTIC_VENGEFULNESS                 43  //float [0, 1]	//use this!!
//tendency to camp
#define CHARACTERISTIC_CAMPER                       44  //float [0, 1]
//========================================================
//========================================================
//tendency to get easy frags
#define CHARACTERISTIC_EASY_FRAGGER                 45  //float [0, 1]
//how alert the bot is (view distance)
#define CHARACTERISTIC_ALERTNESS                    46  //float [0, 1]
//how much the bot fires it's weapon
#define CHARACTERISTIC_FIRETHROTTLE                 47  //float [0, 1]

//========================================================
//========================================================
// Gordon: adding new aim accuracies... this file needs cleaned up...
#define CHARACTERISTIC_AIM_ACCURACY_PRONEMG42       49  //float [0, 1]