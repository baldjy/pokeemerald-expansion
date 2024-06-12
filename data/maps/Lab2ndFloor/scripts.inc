Lab2ndFloor_MapScripts::
	.byte 0


DontLeaveLab::
# 9 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, DontLeaveLab_1
# 16 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DontLeaveLab_2
# 24 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

DontLeaveLab_1:
# 10 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DontLeaveLab_Text_0
# 11 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 12 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 13 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

DontLeaveLab_2:
# 17 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DontLeaveLab_Text_1
# 18 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 19 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 20 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end


DaddyTalk::
# 30 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, DaddyTalk_1
# 42 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, DaddyTalk_13
DaddyTalk_8:
# 49 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, DaddyTalk_6
# 49 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, DaddyTalk_6
# 49 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, DaddyTalk_6
DaddyTalk_5:
# 55 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DaddyTalk_4
	return

DaddyTalk_1:
# 31 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 32 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 33 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 34 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_0
# 35 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_1
# 36 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_2
# 37 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_3
# 38 "data/maps/Lab2ndFloor/scripts.pory"
	setflag DADDYTALK
# 39 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

DaddyTalk_2:
# 43 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 44 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 45 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_4
# 46 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

DaddyTalk_3:
# 51 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 52 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_5
# 53 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

DaddyTalk_4:
# 57 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 58 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_6
# 59 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

DaddyTalk_6:
# 49 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DaddyTalk_3
	goto DaddyTalk_5

DaddyTalk_13:
# 42 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, DaddyTalk_15
	goto DaddyTalk_8

DaddyTalk_15:
# 42 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, DaddyTalk_2
	goto DaddyTalk_8


FillerText::
# 63 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 64 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 65 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox FillerText_Text_0
# 66 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end


FillerText2::
# 70 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 71 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 72 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox FillerText2_Text_0
# 73 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end


BirchTalk::
# 78 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, BirchTalk_12
BirchTalk_7:
# 95 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, BirchTalk_5
# 95 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, BirchTalk_5
# 95 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, BirchTalk_5
BirchTalk_4:
# 103 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, BirchTalk_3
	return

BirchTalk_1:
# 80 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, BirchTalk_17
# 88 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 89 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 90 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_1
# 91 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

BirchTalk_2:
# 97 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 98 "data/maps/Lab2ndFloor/scripts.pory"
	bufferleadmonspeciesname 0
# 99 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_2
# 100 "data/maps/Lab2ndFloor/scripts.pory"
	call GiveDexAndPokeMenu
# 101 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

BirchTalk_3:
# 105 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 106 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_3
# 107 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

BirchTalk_5:
# 95 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, BirchTalk_2
	goto BirchTalk_4

BirchTalk_12:
# 78 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, BirchTalk_14
	goto BirchTalk_7

BirchTalk_14:
# 78 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, BirchTalk_1
	goto BirchTalk_7

BirchTalk_17:
# 81 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 82 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 83 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_0
# 84 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end


PkBall1::
# 112 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall1_1
# 117 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall1_9
PkBall1_5:
# 145 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall1_3
# 145 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall1_3
# 145 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall1_3
	return

PkBall1_1:
# 113 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 114 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 115 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall1_2:
# 119 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 120 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_ENCOUNTER
# 121 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 122 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_1, MSGBOX_YESNO
# 123 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall1_16
# 139 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 140 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall1_15:
# 142 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 143 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall1_3:
# 147 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 148 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 149 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall1_9:
# 117 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall1_11
	goto PkBall1_5

PkBall1_11:
# 117 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall1_2
	goto PkBall1_5

PkBall1_16:
# 125 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 126 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 2
# 128 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 129 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 130 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_2
# 131 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL1
# 132 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 133 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 134 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch1
# 135 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 136 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall1_15


PkBall2::
# 156 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall2_1
# 161 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall2_9
PkBall2_5:
# 189 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall2_3
# 189 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall2_3
# 189 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall2_3
	return

PkBall2_1:
# 157 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 158 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 159 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall2_2:
# 163 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 164 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
# 165 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 166 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall2_Text_0, MSGBOX_YESNO
# 167 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall2_16
# 183 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 184 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall2_15:
# 186 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 187 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall2_3:
# 191 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 192 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 193 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall2_9:
# 161 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall2_11
	goto PkBall2_5

PkBall2_11:
# 161 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall2_2
	goto PkBall2_5

PkBall2_16:
# 169 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 170 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 171 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 3
# 172 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 173 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 174 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall2_Text_1
# 175 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL2
# 176 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 177 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 178 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch2
# 179 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 180 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall2_15


PkBall3::
# 199 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall3_1
# 204 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall3_9
PkBall3_5:
# 232 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall3_3
# 232 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall3_3
# 232 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall3_3
	return

PkBall3_1:
# 200 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 201 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 202 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall3_2:
# 206 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 207 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_TEPIG, CRY_MODE_ENCOUNTER
# 208 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 209 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall3_Text_0, MSGBOX_YESNO
# 210 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall3_16
# 226 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 227 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall3_15:
# 229 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 230 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall3_3:
# 234 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 235 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 236 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall3_9:
# 204 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall3_11
	goto PkBall3_5

PkBall3_11:
# 204 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall3_2
	goto PkBall3_5

PkBall3_16:
# 212 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 213 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 214 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 4
# 215 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 216 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 217 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall3_Text_1
# 218 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL3
# 219 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 220 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 221 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch3
# 222 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 223 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall3_15


EnablePokemonMenu::
# 242 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 243 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


NicknamePartyMon::
# 247 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 248 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 249 "data/maps/Lab2ndFloor/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 250 "data/maps/Lab2ndFloor/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


GiveDexAndPokeMenu::
# 254 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, GiveDexAndPokeMenu_1
	return

GiveDexAndPokeMenu_1:
# 255 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 256 "data/maps/Lab2ndFloor/scripts.pory"
	message GiveDexAndPokeMenu_Text_0
# 257 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 258 "data/maps/Lab2ndFloor/scripts.pory"
	closemessage
# 259 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 260 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 261 "data/maps/Lab2ndFloor/scripts.pory"
	special SetUnlockedPokedexFlags
# 262 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 263 "data/maps/Lab2ndFloor/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 264 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 265 "data/maps/Lab2ndFloor/scripts.pory"
	special EnableNationalPokedex
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox GiveDexAndPokeMenu_Text_1
# 267 "data/maps/Lab2ndFloor/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 268 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox GiveDexAndPokeMenu_Text_2
# 269 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 270 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return


# 273 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch1:
# 274 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 274 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 275 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 275 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 276 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 277 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 279 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch2:
# 280 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 280 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 281 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 281 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 281 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 282 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 283 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 285 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch3:
# 286 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 286 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 287 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 287 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 287 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 287 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 288 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 289 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

DontLeaveLab_Text_0:
# 10 "data/maps/Lab2ndFloor/scripts.pory"
	.string "Let's go talk to dad!$"

DontLeaveLab_Text_1:
# 17 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I should take my pokemon!$"

DaddyTalk_Text_0:
# 34 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: There you are kiddo!\p"
	.string "DAD: I'm glad you could come so fast!\p"
	.string "DAD: First of all I would like to\n"
	.string "introduce you to my new boss!\p"
	.string "DAD: This is Professor BIRCH!$"

DaddyTalk_Text_1:
# 35 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Hello there!\p"
	.string "BIRCH: You must be LEWIS's kid!\p"
	.string "BIRCH: I'm Professor BIRCH But\n"
	.string "everyone calls me the POKéMON\l"
	.string "PROFESSOR\p"
	.string "BIRCH: your dad was jsut telling me how\n"
	.string "much you love POKÉMON$"

DaddyTalk_Text_2:
# 36 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Which brings us to the reason why\n"
	.string "I called you here\p"
	.string "DAD: While I'm here starting my new\n"
	.string "research on POKÉMON types change on\l"
	.string "Regional Forms,\p"
	.string "DAD: I think it would be great to have\n"
	.string "you explore the world on your very first\l"
	.string "pokémon adventure!$"

DaddyTalk_Text_3:
# 37 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: And I, as chief on this new lab\n"
	.string "am very pleased to gift your very first\l"
	.string "POKÉMON!\p"
	.string "BIRCH: See that bench right behind us,\n"
	.string "there you will see 3 POKÉBALLs which\l"
	.string "one cointaing a POKÉMON for you to\l"
	.string "choose\p"
	.string "BIRCH: Go on! Don't leave them waiting!$"

DaddyTalk_Text_4:
# 45 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Go on! there are no bad choices!$"

DaddyTalk_Text_5:
# 52 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Go on kid, say thank you to PROF.\n"
	.string "BIRCH$"

DaddyTalk_Text_6:
# 58 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Safe journey out there!$"

FillerText_Text_0:
# 65 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I'm sorry but I'm very busy right now$"

FillerText2_Text_0:
# 72 "data/maps/Lab2ndFloor/scripts.pory"
	.string "MY DAD IS BETTER THAN YOURS!$"

BirchTalk_Text_0:
# 83 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Oh you're {PLAYER}, right?\n"
	.string "Your dad was looking for you!$"

BirchTalk_Text_1:
# 90 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Go on! Don't leave them waiting!$"

BirchTalk_Text_2:
# 99 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: I see you got a {STR_VAR_1}\p"
	.string "BIRCH: I'm pretty sure you both will\n"
	.string "grow stronger and closer as you\l"
	.string "progress on your adventure\p"
	.string "BIRCH: Since you're now a POKÉMON\n"
	.string "Trainer I believe you're going to need\l"
	.string "this too.$"

BirchTalk_Text_3:
# 106 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Have fun out there!$"

PkBall1_Text_0:
# 114 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I gotta talk to Dad first$"

PkBall1_Text_1:
# 122 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a TREECKO! Do you want to take it?$"

PkBall1_Text_2:
# 130 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a TREECKO$"

PkBall1_Text_3:
# 139 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: It's ok! Go check the other\n"
	.string "POKÉMON$"

PkBall1_Text_4:
# 148 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I already got my POKÉMON$"

PkBall2_Text_0:
# 166 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a FROAKIE! Do you want to take it?$"

PkBall2_Text_1:
# 174 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a FROAKIE$"

PkBall3_Text_0:
# 209 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a TEPIG! Do you want to take it?$"

PkBall3_Text_1:
# 217 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a TEPIG$"

NicknamePartyMon_Text_0:
# 247 "data/maps/Lab2ndFloor/scripts.pory"
	.string "Do you want to nickname it?$"

GiveDexAndPokeMenu_Text_0:
# 256 "data/maps/Lab2ndFloor/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GiveDexAndPokeMenu_Text_1:
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: This is a POKÉDEX, it will catalog\n"
	.string "all POKÉMON you meet and catch\p"
	.string "BIRCH: POKÉMON are very mysterious and\n"
	.string "fun creatures but take care where you\l"
	.string "search for them.\p"
	.string "BIRCH: Usually you will find stronger\n"
	.string "and scarier POKÉMON deep in Caves.\p"
	.string "BIRCH: Also take these with you$"

GiveDexAndPokeMenu_Text_2:
# 268 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH:These allow you to catch your\n"
	.string "own POKÉMON in tall grass so you can\l"
	.string "collect research for the POKÉDEX\p"
	.string "BIRCH: I have one more very important\n"
	.string "thing to say...\p"
	.string "BIRCH: Have fun out there!$"
