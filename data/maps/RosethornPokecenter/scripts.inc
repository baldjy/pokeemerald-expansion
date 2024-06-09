RosethornPokeCenter_MapScripts::
# 2 "data/maps/RosethornPokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 3 "data/maps/RosethornPokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Rosethorn_PokemonCenter_OnTransition
	.byte 0


Rosethorn_PokemonCenter_OnTransition::
# 7 "data/maps/RosethornPokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ROSETHORN_CITY
	end


NuerseJoy_Preset::
# 12 "data/maps/RosethornPokeCenter/scripts.pory"
	lock
# 13 "data/maps/RosethornPokeCenter/scripts.pory"
	faceplayer
# 14 "data/maps/RosethornPokeCenter/scripts.pory"
	msgbox NuerseJoy_Preset_Text_0, MSGBOX_YESNO
# 15 "data/maps/RosethornPokeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NuerseJoy_Preset_1
# 30 "data/maps/RosethornPokeCenter/scripts.pory"
	msgbox NuerseJoy_Preset_Text_2, MSGBOX_NPC
# 31 "data/maps/RosethornPokeCenter/scripts.pory"
	waitfanfare
# 32 "data/maps/RosethornPokeCenter/scripts.pory"
	call NicknamePartyMon
	return

NuerseJoy_Preset_1:
# 16 "data/maps/RosethornPokeCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 17 "data/maps/RosethornPokeCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 18 "data/maps/RosethornPokeCenter/scripts.pory"
	waitmovement 1
# 19 "data/maps/RosethornPokeCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 20 "data/maps/RosethornPokeCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 21 "data/maps/RosethornPokeCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 22 "data/maps/RosethornPokeCenter/scripts.pory"
	waitmovement 1
# 23 "data/maps/RosethornPokeCenter/scripts.pory"
	special HealPlayerParty
# 24 "data/maps/RosethornPokeCenter/scripts.pory"
	msgbox NuerseJoy_Preset_Text_1
# 25 "data/maps/RosethornPokeCenter/scripts.pory"
	waitmessage
# 26 "data/maps/RosethornPokeCenter/scripts.pory"
	release
	end


NuerseJoy_Preset_Text_0:
# 14 "data/maps/RosethornPokeCenter/scripts.pory"
	.string "Would you like me to heal your party?$"

NuerseJoy_Preset_Text_1:
# 24 "data/maps/RosethornPokeCenter/scripts.pory"
	.string "Come again soon.$"

NuerseJoy_Preset_Text_2:
# 30 "data/maps/RosethornPokeCenter/scripts.pory"
	.string "Have a nice day$"
