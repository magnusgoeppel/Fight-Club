# Fight Club Game
The Fight Club Game is a console-based fighting game where two characters face off against each other. Players can either fight against another player or against the computer. Each character can choose two abilities to use in combat.

## Requirements
- g++ Compiler

## Game Instructions
- **Character Selection**: Each player selects two abilities for their character from the options: Punch, Kick, Block, Jump.
- **Choose Game Mode**: Decide whether to fight against another player or the computer.
- **Combat**: Players take turns using their abilities to defeat the opponent.

## Program Structure

The project consists of several classes that implement the game's logic:

- **GameManager**: Main logic of the game, including starting the game and combat logic.
- **Character**: Defines the characters, including their abilities and stats.
- **Skill and Derived Classes (Punch, Kick, Block, Jump)**: Implementation of the various abilities that characters can use.
- **Playmode and Derived Classes (PlaymodeEasy, PlaymodeHard)**: Logic for different game modes against the computer.
