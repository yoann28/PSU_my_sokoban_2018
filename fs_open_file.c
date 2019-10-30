/*
** EPITECH PROJECT, 2019
** fs open
** File description:
** file
*/

#include <stdlib.h>
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#define INPUT_H
#define BUFF_SIZE 100000000

int my_putstr(char const *str);

char *fs_open_file(char *filepath)
{
    int yy = 0;
    static char buffer[BUFF_SIZE];
    int size = 0;

    yy = open(filepath, O_RDONLY);
    if (yy == -1) {
        my_putstr("Error with opn\n");
        exit (84);
    } else {
        size = read (yy, buffer, BUFF_SIZE);
        close(yy);
        return (buffer);
    }
}
