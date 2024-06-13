Lab2ndFloor_MapScripts::
	.byte 0


DontLeaveLab::
# 9 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, DontLeaveLab_1
# 16 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DontLeaveLab_2
# 24 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end

DontLeaveLab_1:
# 10 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DontLeaveLab_Text_0
# 11 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 12 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 13 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end

DontLeaveLab_2:
# 17 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DontLeaveLab_Text_1
# 18 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 19 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 20 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end


DaddyTalk::
# 30 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, DaddyTalk_1
# 61 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, DaddyTalk_13
DaddyTalk_8:
# 68 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, DaddyTalk_6
# 68 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, DaddyTalk_6
# 68 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, DaddyTalk_6
DaddyTalk_5:
# 74 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DaddyTalk_4
	return

DaddyTalk_1:
# 31 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_0
# 32 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement 13, GetPlayer
# 33 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement 13
# 34 "data/maps/Lab2ndFloor/scripts.pory"
	switch VAR_TEMP_1
# 35 "data/maps/Lab2ndFloor/scripts.pory"
	case 1, DaddyTalk_21
# 38 "data/maps/Lab2ndFloor/scripts.pory"
	case 2, DaddyTalk_22
DaddyTalk_19:
# 42 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_1
# 43 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement 13, GotoBirch
# 44 "data/maps/Lab2ndFloor/scripts.pory"
	switch VAR_TEMP_1
# 45 "data/maps/Lab2ndFloor/scripts.pory"
	case 1, DaddyTalk_25
# 47 "data/maps/Lab2ndFloor/scripts.pory"
	case 2, DaddyTalk_26
DaddyTalk_23:
# 50 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 51 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 52 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 53 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_2
# 54 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_3
# 55 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_4
# 56 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_5
# 57 "data/maps/Lab2ndFloor/scripts.pory"
	setflag DADDYTALK
# 58 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end

DaddyTalk_2:
# 62 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 63 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 64 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_6
# 65 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end

DaddyTalk_3:
# 70 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 71 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_7
# 72 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

DaddyTalk_4:
# 76 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 77 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_8
# 78 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

DaddyTalk_6:
# 68 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DaddyTalk_3
	goto DaddyTalk_5

DaddyTalk_13:
# 61 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, DaddyTalk_15
	goto DaddyTalk_8

DaddyTalk_15:
# 61 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, DaddyTalk_2
	goto DaddyTalk_8

DaddyTalk_21:
# 36 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement 13, Common_Movement_FaceUp
# 37 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto DaddyTalk_19

DaddyTalk_22:
# 39 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 40 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto DaddyTalk_19

DaddyTalk_25:
# 46 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FollowDad1
	goto DaddyTalk_23

DaddyTalk_26:
# 48 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FollowDad2
	goto DaddyTalk_23


FillerText::
# 82 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 83 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 84 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox FillerText_Text_0
# 85 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end


FillerText2::
# 89 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 90 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 91 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox FillerText2_Text_0
# 92 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end


BirchTalk::
# 97 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, BirchTalk_12
BirchTalk_7:
# 114 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, BirchTalk_5
# 114 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, BirchTalk_5
# 114 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, BirchTalk_5
BirchTalk_4:
# 122 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, BirchTalk_3
	return

BirchTalk_1:
# 99 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, BirchTalk_17
# 107 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 108 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 109 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_1
# 110 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end

BirchTalk_2:
# 116 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 117 "data/maps/Lab2ndFloor/scripts.pory"
	bufferleadmonspeciesname 0
# 118 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_2
# 119 "data/maps/Lab2ndFloor/scripts.pory"
	call GiveDexAndPokeMenu
# 120 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

BirchTalk_3:
# 124 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 125 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_3
# 126 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

BirchTalk_5:
# 114 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, BirchTalk_2
	goto BirchTalk_4

BirchTalk_12:
# 97 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, BirchTalk_14
	goto BirchTalk_7

BirchTalk_14:
# 97 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, BirchTalk_1
	goto BirchTalk_7

BirchTalk_17:
# 100 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 101 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 102 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_0
# 103 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end


PkBall1::
# 131 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall1_1
# 136 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall1_9
PkBall1_5:
# 164 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall1_3
# 164 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall1_3
# 164 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall1_3
	return

PkBall1_1:
# 132 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 133 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 134 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall1_2:
# 138 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 139 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_ENCOUNTER
# 140 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 141 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_1, MSGBOX_YESNO
# 142 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall1_16
# 158 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 159 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall1_15:
# 161 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 162 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall1_3:
# 166 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 167 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 168 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall1_9:
# 136 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall1_11
	goto PkBall1_5

PkBall1_11:
# 136 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall1_2
	goto PkBall1_5

PkBall1_16:
# 144 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 145 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 2
# 147 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 148 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 149 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_2
# 150 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL1
# 151 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 152 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 153 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch1
# 154 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 155 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall1_15


PkBall2::
# 175 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall2_1
# 180 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall2_9
PkBall2_5:
# 208 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall2_3
# 208 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall2_3
# 208 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall2_3
	return

PkBall2_1:
# 176 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 177 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 178 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall2_2:
# 182 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 183 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
# 184 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 185 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall2_Text_0, MSGBOX_YESNO
# 186 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall2_16
# 202 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 203 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall2_15:
# 205 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 206 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall2_3:
# 210 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 211 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 212 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall2_9:
# 180 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall2_11
	goto PkBall2_5

PkBall2_11:
# 180 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall2_2
	goto PkBall2_5

PkBall2_16:
# 188 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 189 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 3
# 191 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 192 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 193 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall2_Text_1
# 194 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL2
# 195 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 196 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 197 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch2
# 198 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 199 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall2_15


PkBall3::
# 218 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall3_1
# 223 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall3_9
PkBall3_5:
# 251 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall3_3
# 251 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall3_3
# 251 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall3_3
	return

PkBall3_1:
# 219 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 220 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 221 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall3_2:
# 225 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 226 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_TEPIG, CRY_MODE_ENCOUNTER
# 227 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 228 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall3_Text_0, MSGBOX_YESNO
# 229 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall3_16
# 245 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 246 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall3_15:
# 248 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 249 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall3_3:
# 253 "data/maps/Lab2ndFloor/scripts.pory"
	lock
# 254 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 255 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return

PkBall3_9:
# 223 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall3_11
	goto PkBall3_5

PkBall3_11:
# 223 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall3_2
	goto PkBall3_5

PkBall3_16:
# 231 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 232 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 233 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 4
# 234 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 235 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 236 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall3_Text_1
# 237 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL3
# 238 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 239 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 240 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch3
# 241 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 242 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall3_15


EnablePokemonMenu::
# 261 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 262 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


NicknamePartyMon::
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 267 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 268 "data/maps/Lab2ndFloor/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 269 "data/maps/Lab2ndFloor/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


GiveDexAndPokeMenu::
# 273 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, GiveDexAndPokeMenu_1
	return

GiveDexAndPokeMenu_1:
# 274 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 275 "data/maps/Lab2ndFloor/scripts.pory"
	message GiveDexAndPokeMenu_Text_0
# 276 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 277 "data/maps/Lab2ndFloor/scripts.pory"
	closemessage
# 278 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 279 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 280 "data/maps/Lab2ndFloor/scripts.pory"
	special SetUnlockedPokedexFlags
# 281 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 282 "data/maps/Lab2ndFloor/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 283 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 284 "data/maps/Lab2ndFloor/scripts.pory"
	special EnableNationalPokedex
# 285 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox GiveDexAndPokeMenu_Text_1
# 286 "data/maps/Lab2ndFloor/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 287 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox GiveDexAndPokeMenu_Text_2
# 288 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 289 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return


TriggerLab21::
# 293 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, TriggerLab21_1
# 297 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end

TriggerLab21_1:
# 294 "data/maps/Lab2ndFloor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 295 "data/maps/Lab2ndFloor/scripts.pory"
	call DaddyTalk
	return


TriggerLab22::
# 301 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, TriggerLab22_1
# 305 "data/maps/Lab2ndFloor/scripts.pory"
	release
	end

TriggerLab22_1:
# 302 "data/maps/Lab2ndFloor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 303 "data/maps/Lab2ndFloor/scripts.pory"
	call DaddyTalk
	return


# 308 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch1:
# 309 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 309 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 310 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 310 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 311 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 312 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 314 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch2:
# 315 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 315 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 316 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 316 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 316 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 317 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 318 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 320 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch3:
# 321 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 321 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 322 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 322 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 322 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 322 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 323 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 324 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 327 "data/maps/Lab2ndFloor/scripts.pory"
GetPlayer:
# 328 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_right
# 328 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_right
# 328 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_right
# 328 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_right
# 328 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_right
# 328 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_right
# 329 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_up
# 329 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_up
# 329 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_up
# 329 "data/maps/Lab2ndFloor/scripts.pory"
	walk_faster_up
# 330 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 333 "data/maps/Lab2ndFloor/scripts.pory"
GotoBirch:
# 334 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 334 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 334 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 334 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 334 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 334 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 334 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 335 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 335 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 335 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 335 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 335 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 335 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 335 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 336 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 336 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 336 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 337 "data/maps/Lab2ndFloor/scripts.pory"
	face_down
# 338 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 341 "data/maps/Lab2ndFloor/scripts.pory"
FollowDad1:
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 342 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 343 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 343 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 343 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 343 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 343 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 343 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 343 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 344 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 344 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 344 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 345 "data/maps/Lab2ndFloor/scripts.pory"
	face_down
# 346 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 348 "data/maps/Lab2ndFloor/scripts.pory"
FollowDad2:
# 349 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 350 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 350 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 350 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 350 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 350 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 350 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 350 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_down
# 351 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 351 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 351 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 351 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 351 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 351 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 351 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_left
# 352 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 352 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 352 "data/maps/Lab2ndFloor/scripts.pory"
	walk_fast_up
# 353 "data/maps/Lab2ndFloor/scripts.pory"
	face_down
# 354 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

DontLeaveLab_Text_0:
# 10 "data/maps/Lab2ndFloor/scripts.pory"
	.string "Let's go talk to dad!$"

DontLeaveLab_Text_1:
# 17 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I should take my pokemon!$"

DaddyTalk_Text_0:
# 31 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Oh god I'm late!$"

DaddyTalk_Text_1:
# 42 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: There you are kiddo!\p"
	.string "DAD: I was going to meet you downstairs\p"
	.string "DAD: Follow me!$"

DaddyTalk_Text_2:
# 53 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: I'm glad you could come so fast!\p"
	.string "DAD: First of all I would like to\n"
	.string "introduce you to my new boss!\p"
	.string "DAD: This is Professor BIRCH!$"

DaddyTalk_Text_3:
# 54 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Hello there!\p"
	.string "BIRCH: You must be LEWIS's kid!\p"
	.string "BIRCH: I'm Professor BIRCH But\n"
	.string "everyone calls me the POKéMON\l"
	.string "PROFESSOR\p"
	.string "BIRCH: your dad was jsut telling me how\n"
	.string "much you love POKÉMON$"

DaddyTalk_Text_4:
# 55 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Which brings us to the reason why\n"
	.string "I called you here\p"
	.string "DAD: While I'm here starting my new\n"
	.string "research on POKÉMON types change on\l"
	.string "Regional Forms,\p"
	.string "DAD: I think it would be great to have\n"
	.string "you explore the world on your very first\l"
	.string "pokémon adventure!$"

DaddyTalk_Text_5:
# 56 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: And I, as chief on this new lab\n"
	.string "am very pleased to gift your very first\l"
	.string "POKÉMON!\p"
	.string "BIRCH: See that bench right behind us,\n"
	.string "there you will see 3 POKÉBALLs which\l"
	.string "one cointaing a POKÉMON for you to\l"
	.string "choose\p"
	.string "BIRCH: Go on! Don't leave them waiting!$"

DaddyTalk_Text_6:
# 64 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Go on! there are no bad choices!$"

DaddyTalk_Text_7:
# 71 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Go on kid, say thank you to PROF.\n"
	.string "BIRCH$"

DaddyTalk_Text_8:
# 77 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Safe journey out there!$"

FillerText_Text_0:
# 84 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I'm sorry but I'm very busy right now$"

FillerText2_Text_0:
# 91 "data/maps/Lab2ndFloor/scripts.pory"
	.string "MY DAD IS BETTER THAN YOURS!$"

BirchTalk_Text_0:
# 102 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Oh you're {PLAYER}, right?\n"
	.string "Your dad was looking for you!$"

BirchTalk_Text_1:
# 109 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Go on! Don't leave them waiting!$"

BirchTalk_Text_2:
# 118 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: I see you got a {STR_VAR_1}\p"
	.string "BIRCH: I'm pretty sure you both will\n"
	.string "grow stronger and closer as you\l"
	.string "progress on your adventure\p"
	.string "BIRCH: Since you're now a POKÉMON\n"
	.string "Trainer I believe you're going to need\l"
	.string "this too.$"

BirchTalk_Text_3:
# 125 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Have fun out there!$"

PkBall1_Text_0:
# 133 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I gotta talk to Dad first$"

PkBall1_Text_1:
# 141 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a TREECKO! Do you want to take it?$"

PkBall1_Text_2:
# 149 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a TREECKO$"

PkBall1_Text_3:
# 158 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: It's ok! Go check the other\n"
	.string "POKÉMON$"

PkBall1_Text_4:
# 167 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I already got my POKÉMON$"

PkBall2_Text_0:
# 185 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a FROAKIE! Do you want to take it?$"

PkBall2_Text_1:
# 193 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a FROAKIE$"

PkBall3_Text_0:
# 228 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a TEPIG! Do you want to take it?$"

PkBall3_Text_1:
# 236 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a TEPIG$"

NicknamePartyMon_Text_0:
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	.string "Do you want to nickname it?$"

GiveDexAndPokeMenu_Text_0:
# 275 "data/maps/Lab2ndFloor/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GiveDexAndPokeMenu_Text_1:
# 285 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: This is a POKÉDEX, it will catalog\n"
	.string "all POKÉMON you meet and catch\p"
	.string "BIRCH: POKÉMON are very mysterious and\n"
	.string "fun creatures but take care where you\l"
	.string "search for them.\p"
	.string "BIRCH: Usually you will find stronger\n"
	.string "and scarier POKÉMON deep in Caves.\p"
	.string "BIRCH: Also take these with you$"

GiveDexAndPokeMenu_Text_2:
# 287 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH:These allow you to catch your\n"
	.string "own POKÉMON in tall grass so you can\l"
	.string "collect research for the POKÉDEX\p"
	.string "BIRCH: I have one more very important\n"
	.string "thing to say...\p"
	.string "BIRCH: Have fun out there!$"
