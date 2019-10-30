/*
** EPITECH PROJECT, 2019
** usage
** File description:
** usage
*/

int my_putstr (char const *str);

int usage (void)
{
    my_putstr ("USAGE\n");
    my_putstr ("      ./my_sokoban map\n");
    my_putstr ("DESCRIPTION\n");
    my_putstr ("            map file representing");
    my_putstr (" the warehouse map, containig");
    my_putstr ("'#' for walls, \n");
    my_putstr ("                'P' for the player, 'X' ");
    my_putstr ("for boxes and 'O' for storage locations.\n");
}
