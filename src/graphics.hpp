#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

/* Includes */

#include <ncursesw/ncurses.h>

#include "map.hpp"

/* Vars */

const int WALL_PAIR = 1;
const int RED_PAIR = 2;
const int YELLOW_PAIR = 3;

/* Game window */

// create and return the window for the game
WINDOW *create_game_window(
    int game_win_height, 
    int game_win_width, 
    int info_win_width
);

// show splash screen in a window
void showSplashScreen(WINDOW *win);

// display map in a window
void display_map(WINDOW *win, map *map, coin *cHead);

/* Info window */

// refresh the text that shows the title of the game
void refresh_title(WINDOW *info_win, int level);

// refresh the text that shows the stats of the game
void refresh_stats(
    WINDOW *info_win,
    int life, 
    int money
);

// create and return the window for the info of the game
WINDOW *create_info_window(
    WINDOW *game_win,
    int game_win_height, 
    int game_win_width, 
    int info_win_width
);

#endif