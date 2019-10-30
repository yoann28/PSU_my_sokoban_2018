/*
** EPITECH PROJECT, 2019
** code
** File description:
** code
*/

#include <ncurses.h>

int move_good (int y, int x);
int move_yes (int y, int x);
int *researchp(char player);

int mouv_up(int y, int x)
{
    if ((y > 0) && move_good(y - 1, x)) {
        mvaddch(y, x, ' ');
        y = y - 1;
    }
    if ((y > 0) && move_yes(y - 1, x)) {
        mvaddch(y, x, ' ');
        y = y - 1;
        mvprintw(y - 1, x, "X");
    }
    return (y);
}

int mouv_down(int y, int x)
{
    if ((y < LINES - 1) && move_good(y + 1, x)) {
        mvaddch(y, x, ' ');
        y = y + 1;
    }
    if ((y < LINES - 1) && move_yes(y + 1, x)) {
        mvaddch(y, x, ' ');
        y = y + 1;
        mvprintw(y + 1, x, "X");
    }
    return (y);
}

int mouv_left(int x, int y)
{
    if ((x > 0) && move_good(y, x - 1)) {
        mvaddch(y, x, ' ');
        x = x - 1;
    }
    if ((x > 0) && move_yes(y, x - 1)) {
        mvaddch(y, x, ' ');
        x = x - 1;
        mvprintw(y, x - 1, "X");
    }
    return (x);
}

int mouv_right(int x, int y)
{
    if ((x < COLS - 1) && move_good(y, x + 1)) {
        mvaddch(y, x, ' ');
        x = x + 1;
    }
    if ((x < COLS - 1) && move_yes(y, x + 1)) {
        mvaddch(y, x, ' ');
        x = x + 1;
        mvprintw(y, x + 1, "X");
    }
    return (x);
}

int movement (int x, int y)
{
    int enter, *tab;
    tab = researchp('P');
    x = tab[1];
    y = tab[0];
    move_good(x, y);
    while (enter != ' ') {
        mvaddch(y, x, 'P');
        move(y, x);
        enter = getch();
        switch (enter) {
        case KEY_UP:
            y = mouv_up(y, x);
            break;
        case KEY_DOWN:
            y = mouv_down(y, x);
            break;
        case KEY_LEFT:
            x = mouv_left(x, y);
            break;
        case KEY_RIGHT:
            x = mouv_right(x, y);
            break;
        }
    }
}
