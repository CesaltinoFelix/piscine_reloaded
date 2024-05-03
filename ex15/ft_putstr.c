#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = -1;
    while(str[++i] != '\0')
    {
        ft_putchar(str[i]);
    }
}


int main(void)
{
    ft_putstr("Ola, eu sou o cesaltino");
}