#include<unistd.h>

int ft_iterative_factorial(int nb)
{
    int f;

    f = 1;
    if (nb == 0)
    return (0);

    while (nb > 0)
    {
        f = f * nb;
        nb--;
    }
    return (f);
}

int main(void)
{
    int f = ft_iterative_factorial(3);
    char c = f + '0';
    write(1, &c, 1);
}
