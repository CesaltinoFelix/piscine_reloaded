#include<stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if ((unsigned int)s1[i] - (unsigned int)s2[i] != 0)
            return ((unsigned int)s1[i] - (unsigned int)s2[i]);
        i++;
    }
    return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

int main()
{
    int res = ft_strcmp("eelcon", "a");
    printf("res = %d", res);
}