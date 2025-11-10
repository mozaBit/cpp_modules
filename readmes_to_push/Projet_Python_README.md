# Pokemon RPG - Python Project

A Pokemon-style RPG game built in Python - School Project at Paris Ynov Campus

## Overview

This is a Pokemon-inspired text-based RPG game developed as a group project for a Python programming course at Paris Ynov Campus. The game recreates the classic Pokemon gameplay experience including turn-based battles, trainer progression, multiple maps, and a collection of Pokemon to train and battle with.

## Description

The game is a homage to the classic Pokemon games, featuring:
- A starter Pokemon selection system
- Multiple maps to explore with grass encounters
- Wild Pokemon battles and trainer battles
- Turn-based combat system with type advantages
- Experience and leveling system
- Pokemon evolution mechanics
- Background music and sound effects using pygame
- Boss battles to progress through the story

## Features

### Implemented Features

**Map & Movement:**
- ✅ Player movement controls
- ✅ Collision detection
- ✅ Wild Pokemon encounters in tall grass
- ✅ Multiple interconnected maps (5 maps total)
- ✅ Door/portal system between maps
- ❌ Building entry/exit (planned)

**Combat System:**
- ✅ Attack execution with damage calculation
- ✅ Physical and special damage types
- ✅ Stat modifications
- ✅ Type effectiveness system (14 Pokemon types)
- ✅ Pokemon switching during battle
- ✅ Flee from wild battles
- ✅ Trainer battles

**Pokemon Mechanics:**
- ✅ Experience gain system
- ✅ Level up mechanics
- ✅ Move learning system
- ✅ Evolution system
- ✅ IV (Individual Values) system
- ✅ EV (Effort Values) system
- ✅ Base stats calculation

**Menus:**
- ❌ Pokemon menu (ordering, stats, moves) - planned
- ❌ Item/bag menu - planned
- ❌ Player menu - planned
- ❌ Pokedex - optional feature
- ❌ Save system - planned

### Pokemon Types

The game implements a complete type effectiveness system with 14 types:
- Normal, Fire, Water, Grass
- Electric, Ice, Fighting, Poison
- Ground, Flying, Psychic, Bug
- Rock, Ghost

Type advantages are calculated using a comprehensive type effectiveness matrix.

### Game Progression

The game features 5 maps, each with:
- A healer/merchant NPC (Joel)
- A boss trainer to defeat
- Wild Pokemon encounters in grass areas
- Portal to the next map

**Boss Trainers:**
1. **Map 1 - JO**: Reptincel & Racaillou (Level 10)
2. **Map 2 - Zelephe**: Tortank & Ramoloss (Level 30)
3. **Map 3 - Mourenio**: Lokhlass, Ectoplasma & Pikachu (Level 50)
4. **Map 4 - Brando**: Raichu, Roucarnage & Papilusion (Level 50)
5. **Map 5 - JO (Final)**: Florizarre, Dracaufeu, Tortank & Mackogneur (Level 100)

## Installation

### Requirements

- Python 3.7+
- Required libraries:
  - pygame
  - colorama
  - click

### Setup

1. Clone the repository:
```bash
git clone <repository-url>
cd Projet_Python
```

2. Install dependencies:
```bash
pip install pygame colorama click
```

3. Ensure audio files are present in the `music/` directory

## Usage

### Starting the Game

Run the main game file:
```bash
python YassineZ/main.py
```

Or run the standalone launcher:
```bash
python Jeux.py
```

### Main Menu

When the game starts, you'll see the title screen with options:
1. **JOUER** - Start the game
2. **CREDIT** - View game credits
3. **But du jeux** - View game objectives

### Game Start

1. Meet Professor Raoult who welcomes you to the Pokemon world
2. Choose your starter Pokemon:
   - Salameche (Charmander) - Fire type
   - Carapuce (Squirtle) - Water type
   - Bulbizarre (Bulbasaur) - Grass type
3. Receive 10£ starting money
4. Begin your adventure!

### Controls

**Map Navigation:**
- Arrow keys or WASD for movement
- Enter to interact with NPCs/doors

**Battle System:**
- Select from available options:
  - Attack - Choose a move to attack
  - Pokemon - Switch active Pokemon
  - Flee - Escape from wild battles
  - Bag - Use items (when implemented)

### Gameplay Tips

- Talk to Joel (healer NPC) at the start of each map to heal your Pokemon
- Train in the grass to level up before facing bosses
- Type advantages matter - use them strategically
- Pokemon evolve at certain levels automatically
- Each map's boss is significantly stronger than the previous one

## Project Structure

```
Projet_Python/
├── README.md                    # This file
├── Jeux.py                     # Alternative launcher (commented out)
├── machin.py                   # Utility script
├── YassineZ/                   # Main game directory
│   ├── main.py                 # Main game entry point
│   ├── Pokemon_Class.py        # Pokemon class and all Pokemon data
│   ├── Mouv_Class.py           # Move/attack class definitions
│   ├── Dresseur_Class.py       # Trainer/player class (Dresseur = Trainer)
│   ├── Combat.py               # Battle system logic
│   ├── map_Class.py            # Map and biome system
│   ├── Item_Class.py           # Items (planned)
│   ├── test.py                 # Testing file
│   └── music.py                # Music management
├── music/                      # Audio files directory
│   ├── generique.wav           # Main theme
│   ├── combat_pokemon.wav      # Wild Pokemon battle
│   ├── combat_dresseur.wav     # Trainer battle
│   ├── port_pokemon.wav        # Route music
│   ├── route_228.wav           # Alternate route music
│   └── Professor.wav           # Professor theme
└── .vscode/                    # VSCode configuration
```

## Technical Details

### Classes

**Pokemon_Class.py:**
- Pokemon base class with stats, moves, types
- IV/EV stat calculation
- Experience and leveling system
- All Pokemon species definitions
- Type effectiveness matrix

**Mouv_Class.py:**
- Move/attack definitions
- Damage calculation
- Status effects
- PP (Power Points) system

**Dresseur_Class.py:**
- Player (Joueur) class
- Trainer NPC classes
- Healer/Merchant NPCs
- Team management

**Combat.py:**
- Turn-based battle system
- Battle menu interface
- Victory/defeat conditions
- Experience distribution

**map_Class.py:**
- Map grid system
- Biome definitions (grass, portals, walls)
- NPC placement
- Collision detection
- Map transitions

### Stat Calculation

The game uses authentic Pokemon stat formulas:

**HP Calculation:**
```
HP = ((2 * Base + IV + (EV/4)) * Level / 100) + Level + 10
```

**Other Stats:**
```
Stat = ((2 * Base + IV + (EV/4)) * Level / 100) + 5
```

### Type Effectiveness

- **Super Effective:** 2x damage (shown in green)
- **Not Very Effective:** 0.5x damage (shown in red)
- **No Effect:** 0x damage (shown in black)
- **Neutral:** 1x damage (shown in blue)

## Development Status

**Current State:** Playable demo

The game is in a demo/prototype state with core mechanics implemented. Players can:
- Start the game and choose a starter
- Battle wild Pokemon and trainers
- Level up and evolve Pokemon
- Progress through all 5 maps
- Defeat all boss trainers

**Planned Features:**
- Complete menu system
- Bag/item system
- Save/load functionality
- Building interiors
- More Pokemon species
- Pokedex (optional)

## Credits

**Team Members - Paris Ynov Campus Python Project:**

- **Meliha Urlu** - Music and Item class implementation
- **Bamh Metehri** - Trainer class and map navigation
- **Yassine Frikiche** - Map creation and event system
- **Yassine Zaoui** - Pokemon and Move classes

**Project Timeline:** May 2022

## Game Objective

This is an RPG that attempts to recreate the Pokemon game experience. Start your adventure by choosing a starter Pokemon, then spawn on a map (there are 5 maps total). Each map has a boss trainer. The goal is to defeat all the bosses and reach the end of the game!

## Known Issues

- Some features are still in development (menus, items, save system)
- Music files must be in WAV format (MP3 not supported)
- Console clearing may vary by operating system
- Some text is in French (game developed in France)

## Technical Notes

- **Language:** Python 3.7+
- **Graphics:** Text-based with colorama for colored terminal output
- **Audio:** pygame mixer for music and sound effects
- **Platform:** Cross-platform (Windows, macOS, Linux)
- **Input:** Keyboard-based controls

## Future Improvements

- Add more Pokemon species
- Implement complete bag/item system
- Add save/load functionality
- Create interior maps for buildings
- Expand the story and dialogue
- Add more battle features (status conditions, weather)
- Implement held items
- Add trading system (if multiplayer)

## License

School project for educational purposes.

## Acknowledgments

Inspired by the Pokemon game series by Game Freak and Nintendo.

---

**Bon jeu! (Have fun playing!)**
