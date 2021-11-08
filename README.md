# so_long

## Quick description

This project is a small 2D game that makes use of [MinilibX](https://github.com/42Paris/minilibx-linux). It aims for 42 students to use their first graphics library, without the complexity of Xlib.

## Installation

### Clone the repository

```sh
git clone https://github.com/benjaminbrassart/so_long.git
```

### Compile

```sh
make
```

## How to play

### Starting the game

This game uses `.ber` files to parse maps. Therefore, you must provide the path of a valid map file.

```sh
./so_long <map file>
```

There are several default map files you can use. They are located in `assets/map/`.

### Customizing controls

Controls are in the [keybindings.h](include/keybindings.h#L16) header file. You can edit the following macros.

```c
#define KEY_UP 'w'
#define KEY_LEFT 'a'
#define KEY_DOWN 's'
#define KEY_RIGHT 'd'
```

## Resources
Please check [the credits file](CREDITS.md) to get the resources links.
