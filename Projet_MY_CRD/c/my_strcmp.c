/*
** ETNA PROJECT, 05/11/2021 by Anthony LECLERCQ
** [...]
** File description:
**      [...]
*/


int my_strcmp(const char *s1, const char *s2)
{

    int	i;
    i=0;

    while((s1[i] == s2[i]) && (s1[i] != '\0') && s2[i] != '\0')
        {
            i=i+1;
        }


    return(s1[i]-s2[i]);
}
