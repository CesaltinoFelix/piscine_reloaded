#include<stdio.h>

int ft_sqrt(int nb)
{
    int square;
    int potencialNumber;
    potencialNumber = 1;
    while (potencialNumber <= nb)
    {   
        square = potencialNumber * potencialNumber;
        if(square == nb)
            return (potencialNumber);
        potencialNumber++;
    }
    return (0);
}

int main(void)
{
    int s = ft_sqrt(1);
    printf("resultado = %d", s);
}