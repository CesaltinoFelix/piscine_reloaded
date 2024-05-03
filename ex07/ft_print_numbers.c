#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_numbers(void)
{
    int numero;

    numero = -1;
    while (++numero < 10)
    ft_putchar(numero + '0');
}

int main(void)
{
    ft_print_numbers();
    return (0);
}