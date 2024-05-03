#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1); 
}

void ft_print_alphabet(void)
{
    char letra;
    
    letra = 'a';
    while (letra <= 'z')
    {
        ft_putchar(letra);
        letra++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}