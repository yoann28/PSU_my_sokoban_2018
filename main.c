/*
** EPITECH PROJECT, 2019
** main main
** File description:
** main
*/

#include <ncurses.h>
#include <stdlib.h>

int my_strcmp (char *str, char *str2);
int my_putstr (char const *str);
int usage (void);
int movement (int x, int y);
char *fs_open_file (char *filepath);

int main (int ac, char **av)
{
    int x = 0;
    int y = 0;
    char *buffer;
    if (ac == 1) {
        my_putstr ("Too few arguments, ");
        my_putstr ("do ./my_sokoban -h\n");
        exit (84);
    }
    if (my_strcmp (av[1], "-h") == 0) {
        usage ();
        exit (84);
    } else {
        initscr ();
        keypad (stdscr, TRUE);
        buffer = fs_open_file (av[1]);
        mvprintw(0, 0, buffer);
        movement (x, y);
        endwin ();
    }
    return (0);
}
