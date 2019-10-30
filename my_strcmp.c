/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** do my_strcmp
*/

int my_strlen (char const *str);

int my_strcmp (char *str, char *str2)
{
    int i = 0;
    int j = 0;
    int cpt = 1;
    while (str2[j] != '\0') {
        while (str2[j] != str[i] && str2[j] != '\0')
            j++;
        while (str[i] == str2[j]) {
            if (my_strlen(str) == cpt)
                return (0);
            i++;
            j++;
            cpt++;
        }
        i = 0;
        cpt = 1;
    }
    return (1);
}
