/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** a function my_strlen
*/

int my_strlen (char const *str)
{
    int a;
    a = 0;
    while (str[a] != '\0') {
        a++;
    }
    return (a);
}
