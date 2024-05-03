#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = -1;
    while (str[++i] != '\0')
    {
        ft_putchar(str[i]);
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i;
        int j;

        i = 1;
        while (i < argc)
        {
            ft_putstr(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return (0);
}