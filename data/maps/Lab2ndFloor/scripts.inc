Lab2ndFloor_MapScripts::
	.byte 0


DaddyTalk::
# 9 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, DaddyTalk_1
# 21 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, DaddyTalk_13
DaddyTalk_8:
# 28 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, DaddyTalk_6
# 28 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, DaddyTalk_6
# 28 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, DaddyTalk_6
DaddyTalk_5:
# 34 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DaddyTalk_4
	return

DaddyTalk_1:
# 10 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 11 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 12 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 13 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_0
# 14 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_1
# 15 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_2
# 16 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_3
# 17 "data/maps/Lab2ndFloor/scripts.pory"
	setflag DADDYTALK
# 18 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

DaddyTalk_2:
# 22 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 23 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 24 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_4
# 25 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

DaddyTalk_3:
# 30 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 31 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_5
# 32 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

DaddyTalk_4:
# 36 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 37 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox DaddyTalk_Text_6
# 38 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

DaddyTalk_6:
# 28 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DaddyTalk_3
	goto DaddyTalk_5

DaddyTalk_13:
# 21 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, DaddyTalk_15
	goto DaddyTalk_8

DaddyTalk_15:
# 21 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, DaddyTalk_2
	goto DaddyTalk_8


FillerText::
# 42 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 43 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 44 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox FillerText_Text_0
# 45 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end


FillerText2::
# 49 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 50 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 51 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox FillerText2_Text_0
# 52 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end


BirchTalk::
# 57 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, BirchTalk_12
BirchTalk_7:
# 74 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, BirchTalk_5
# 74 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, BirchTalk_5
# 74 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, BirchTalk_5
BirchTalk_4:
# 82 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, BirchTalk_3
	return

BirchTalk_1:
# 59 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, BirchTalk_17
# 67 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 68 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 69 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_1
# 70 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end

BirchTalk_2:
# 76 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 77 "data/maps/Lab2ndFloor/scripts.pory"
	bufferleadmonspeciesname 0
# 78 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_2
# 79 "data/maps/Lab2ndFloor/scripts.pory"
	call GiveDexAndPokeMenu
# 80 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

BirchTalk_3:
# 84 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 85 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_3
# 86 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

BirchTalk_5:
# 74 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, BirchTalk_2
	goto BirchTalk_4

BirchTalk_12:
# 57 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, BirchTalk_14
	goto BirchTalk_7

BirchTalk_14:
# 57 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, BirchTalk_1
	goto BirchTalk_7

BirchTalk_17:
# 60 "data/maps/Lab2ndFloor/scripts.pory"
	faceplayer
# 61 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 62 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox BirchTalk_Text_0
# 63 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	end


PkBall1::
# 91 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall1_1
# 96 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall1_9
PkBall1_5:
# 124 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall1_3
# 124 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall1_3
# 124 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall1_3
	return

PkBall1_1:
# 92 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 93 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 94 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall1_2:
# 98 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 99 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_ENCOUNTER
# 100 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 101 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_1, MSGBOX_YESNO
# 102 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall1_16
# 118 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 119 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall1_15:
# 121 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 122 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall1_3:
# 126 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 127 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 128 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall1_9:
# 96 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall1_11
	goto PkBall1_5

PkBall1_11:
# 96 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall1_2
	goto PkBall1_5

PkBall1_16:
# 104 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 105 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 2
# 107 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 108 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 109 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_2
# 110 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL1
# 111 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 112 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 113 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch1
# 114 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 115 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall1_15


PkBall2::
# 135 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall2_1
# 140 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall2_9
PkBall2_5:
# 168 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall2_3
# 168 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall2_3
# 168 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall2_3
	return

PkBall2_1:
# 136 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 137 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 138 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall2_2:
# 142 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 143 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
# 144 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 145 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall2_Text_0, MSGBOX_YESNO
# 146 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall2_16
# 162 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 163 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall2_15:
# 165 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 166 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall2_3:
# 170 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 171 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 172 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall2_9:
# 140 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall2_11
	goto PkBall2_5

PkBall2_11:
# 140 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall2_2
	goto PkBall2_5

PkBall2_16:
# 148 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 149 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 3
# 151 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 152 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 153 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall2_Text_1
# 154 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL2
# 155 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 156 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 157 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch2
# 158 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 159 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall2_15


PkBall3::
# 178 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset DADDYTALK, PkBall3_1
# 183 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL1, PkBall3_9
PkBall3_5:
# 211 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL1, PkBall3_3
# 211 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL2, PkBall3_3
# 211 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_set PKBALL3, PkBall3_3
	return

PkBall3_1:
# 179 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 180 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_0
# 181 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall3_2:
# 185 "data/maps/Lab2ndFloor/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 186 "data/maps/Lab2ndFloor/scripts.pory"
	playmoncry SPECIES_TEPIG, CRY_MODE_ENCOUNTER
# 187 "data/maps/Lab2ndFloor/scripts.pory"
	waitmoncry
# 188 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall3_Text_0, MSGBOX_YESNO
# 189 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkBall3_16
# 205 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_3
# 206 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
PkBall3_15:
# 208 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 209 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall3_3:
# 213 "data/maps/Lab2ndFloor/scripts.pory"
	lockall
# 214 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall1_Text_4
# 215 "data/maps/Lab2ndFloor/scripts.pory"
	releaseall
	return

PkBall3_9:
# 183 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL2, PkBall3_11
	goto PkBall3_5

PkBall3_11:
# 183 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset PKBALL3, PkBall3_2
	goto PkBall3_5

PkBall3_16:
# 191 "data/maps/Lab2ndFloor/scripts.pory"
	hidemonpic
# 192 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/Lab2ndFloor/scripts.pory"
	removeobject 4
# 194 "data/maps/Lab2ndFloor/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 195 "data/maps/Lab2ndFloor/scripts.pory"
	call EnablePokemonMenu
# 196 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox PkBall3_Text_1
# 197 "data/maps/Lab2ndFloor/scripts.pory"
	setflag PKBALL3
# 198 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 199 "data/maps/Lab2ndFloor/scripts.pory"
	call NicknamePartyMon
# 200 "data/maps/Lab2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PoketoBitch3
# 201 "data/maps/Lab2ndFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 202 "data/maps/Lab2ndFloor/scripts.pory"
	call BirchTalk
	goto PkBall3_15


EnablePokemonMenu::
# 221 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 222 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


NicknamePartyMon::
# 226 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 227 "data/maps/Lab2ndFloor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 228 "data/maps/Lab2ndFloor/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 229 "data/maps/Lab2ndFloor/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


GiveDexAndPokeMenu::
# 233 "data/maps/Lab2ndFloor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, GiveDexAndPokeMenu_1
	return

GiveDexAndPokeMenu_1:
# 234 "data/maps/Lab2ndFloor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 235 "data/maps/Lab2ndFloor/scripts.pory"
	message GiveDexAndPokeMenu_Text_0
# 236 "data/maps/Lab2ndFloor/scripts.pory"
	waitfanfare
# 237 "data/maps/Lab2ndFloor/scripts.pory"
	closemessage
# 238 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 239 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 240 "data/maps/Lab2ndFloor/scripts.pory"
	special SetUnlockedPokedexFlags
# 241 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 242 "data/maps/Lab2ndFloor/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 243 "data/maps/Lab2ndFloor/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 244 "data/maps/Lab2ndFloor/scripts.pory"
	special EnableNationalPokedex
# 245 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox GiveDexAndPokeMenu_Text_1
# 246 "data/maps/Lab2ndFloor/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 247 "data/maps/Lab2ndFloor/scripts.pory"
	msgbox GiveDexAndPokeMenu_Text_2
# 248 "data/maps/Lab2ndFloor/scripts.pory"
	waitmessage
# 249 "data/maps/Lab2ndFloor/scripts.pory"
	release
	return


# 252 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch1:
# 253 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 253 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 254 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 254 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 255 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 256 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 258 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch2:
# 259 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 259 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 260 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 260 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 260 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 261 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 262 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

# 264 "data/maps/Lab2ndFloor/scripts.pory"
PoketoBitch3:
# 265 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 265 "data/maps/Lab2ndFloor/scripts.pory"
	walk_down
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 266 "data/maps/Lab2ndFloor/scripts.pory"
	walk_left
# 267 "data/maps/Lab2ndFloor/scripts.pory"
	face_up
# 268 "data/maps/Lab2ndFloor/scripts.pory"
	step_end

DaddyTalk_Text_0:
# 13 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: There you are kiddo!\p"
	.string "DAD: I'm glad you could come so fast!\p"
	.string "DAD: First of all I would like to\n"
	.string "introduce you to my new boss!\p"
	.string "DAD: This is Professor BIRCH!$"

DaddyTalk_Text_1:
# 14 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Hello there!\p"
	.string "BIRCH: You must be LEWIS's kid!\p"
	.string "BIRCH: I'm Professor BIRCH But\n"
	.string "everyone calls me the POKéMON\l"
	.string "PROFESSOR\p"
	.string "BIRCH: your dad was jsut telling me how\n"
	.string "much you love POKÉMON$"

DaddyTalk_Text_2:
# 15 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Which brings us to the reason why\n"
	.string "I called you here\p"
	.string "DAD: While I'm here starting my new\n"
	.string "research on POKÉMON types change on\l"
	.string "Regional Forms,\p"
	.string "DAD: I think it would be great to have\n"
	.string "you explore the world on your very first\l"
	.string "pokémon adventure!$"

DaddyTalk_Text_3:
# 16 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: And I, as chief on this new lab\n"
	.string "am very pleased to gift your very first\l"
	.string "POKÉMON!\p"
	.string "BIRCH: See that bench right behind us,\n"
	.string "there you will see 3 POKÉBALLs which\l"
	.string "one cointaing a POKÉMON for you to\l"
	.string "choose\p"
	.string "BIRCH: Go on! Don't leave them waiting!$"

DaddyTalk_Text_4:
# 24 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Go on! there are no bad choices!$"

DaddyTalk_Text_5:
# 31 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Go on kid, say thank you to PROF.\n"
	.string "BIRCH$"

DaddyTalk_Text_6:
# 37 "data/maps/Lab2ndFloor/scripts.pory"
	.string "DAD: Safe journey out there!$"

FillerText_Text_0:
# 44 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I'm sorry but I'm very busy right now$"

FillerText2_Text_0:
# 51 "data/maps/Lab2ndFloor/scripts.pory"
	.string "MY DAD IS BETTER THAN YOURS!$"

BirchTalk_Text_0:
# 62 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Oh you're {PLAYER}, right?\n"
	.string "Your dad was looking for you!$"

BirchTalk_Text_1:
# 69 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Go on! Don't leave them waiting!$"

BirchTalk_Text_2:
# 78 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: I see you got a {STR_VAR_1}\p"
	.string "BIRCH: I'm pretty sure you both will\n"
	.string "grow stronger and closer as you\l"
	.string "progress on your adventure\p"
	.string "BIRCH: Since you're now a POKÉMON\n"
	.string "Trainer I believe you're going to need\l"
	.string "this too.$"

BirchTalk_Text_3:
# 85 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: Have fun out there!$"

PkBall1_Text_0:
# 93 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I gotta talk to Dad first$"

PkBall1_Text_1:
# 101 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a TREECKO! Do you want to take it?$"

PkBall1_Text_2:
# 109 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a TREECKO$"

PkBall1_Text_3:
# 118 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: It's ok! Go check the other\n"
	.string "POKÉMON$"

PkBall1_Text_4:
# 127 "data/maps/Lab2ndFloor/scripts.pory"
	.string "I already got my POKÉMON$"

PkBall2_Text_0:
# 145 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a FROAKIE! Do you want to take it?$"

PkBall2_Text_1:
# 153 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a FROAKIE$"

PkBall3_Text_0:
# 188 "data/maps/Lab2ndFloor/scripts.pory"
	.string "It's a TEPIG! Do you want to take it?$"

PkBall3_Text_1:
# 196 "data/maps/Lab2ndFloor/scripts.pory"
	.string "You got a TEPIG$"

NicknamePartyMon_Text_0:
# 226 "data/maps/Lab2ndFloor/scripts.pory"
	.string "Do you want to nickname it?$"

GiveDexAndPokeMenu_Text_0:
# 235 "data/maps/Lab2ndFloor/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GiveDexAndPokeMenu_Text_1:
# 245 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH: This is a POKÉDEX, it will catalog\n"
	.string "all POKÉMON you meet and catch\p"
	.string "BIRCH: POKÉMON are very mysterious and\n"
	.string "fun creatures but take care where you\l"
	.string "search for them.\p"
	.string "BIRCH: Usually you will find stronger\n"
	.string "and scarier POKÉMON deep in Caves.\p"
	.string "BIRCH: Also take these with you$"

GiveDexAndPokeMenu_Text_2:
# 247 "data/maps/Lab2ndFloor/scripts.pory"
	.string "BIRCH:These allow you to catch your\n"
	.string "own POKÉMON in tall grass so you can\l"
	.string "collect research for the POKÉDEX\p"
	.string "BIRCH: I have one more very important\n"
	.string "thing to say...\p"
	.string "BIRCH: Have fun out there!$"
