/*
** EPITECH PROJECT, 2019
** search
** File description:
** p
*/

#include <ncurses.h>

int move_good (int y, int x)
{
    int testch;
    testch = mvinch(y, x);
    return (testch == ' ');
}

int move_yes (int y, int x)
{
    int test;
    test = mvinch(y, x);
    return (test == 'X');
}

int *researchp(char player)
{
    unsigned int i = 0;
    unsigned int j = 0;
    static  int tab[2] = {0, 0};
    for (i = 0; i <= COLS; i++) {
        for (j = 0; j <= LINES; j++) {
            if (mvinch(i, j) == player) {
                tab[0] = i;
                tab[1] = j;
            }
        }
    }
    return (tab);
}
