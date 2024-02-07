cmake_minimum_required(VERSION 3.25)
project(Fight_Club)

set(CMAKE_CXX_STANDARD 17)

add_executable(Fight_Club main.cpp Klassen/GameManager/GameManager.h Klassen/Character/Character.h Klassen/Skill/Skill.h Klassen/Skill/Punch/Punch.h Klassen/Skill/Block/Block.h Klassen/GameManager/GameManager.cpp Klassen/Character/Character.cpp Klassen/Skill/Skill.cpp Klassen/Skill/Block/Block.cpp Klassen/Skill/Punch/Punch.cpp Klassen/Skill/Kick/Kick.h Klassen/Skill/Kick/Kick.h Klassen/Skill/Kick/Kick.h Klassen/Skill/Kick/Kick.cpp Klassen/Skill/Jump/Jump.cpp Klassen/Playmode/PlaymodeEasy/PlaymodeEasy.h Klassen/Playmode/PlaymodeHard/PlaymodeHard.h Klassen/Playmode/PlaymodeHard/PlaymodeHard.cpp Klassen/Playmode/PlaymodeEasy/PlaymodeEasy.cpp Klassen/Playmode/Playmode.h Klassen/Playmode/Playmode.cpp)
