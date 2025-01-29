#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int checkerror(char *str)
{
    int i;
    int j;
    int x;

    i = 0;
    x = ft_strlen(str);
    if (str[0] == '\0' || x == 1)
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
            return (0);
        j = i + 1;
        while (j < x)
        {
            if (str[i] == str[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int e;
    int l;
    int nb;

    e = checkerror(base);
    l = ft_strlen(base);
    nb = nbr;
    if (e == 1)
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = nb * -1;
        }
        if (nb < l)
            write(1, &base[nb], 1);
        if (nb >= l)
        {
            ft_putnbr_base (nb / l, base);
            ft_putnbr_base (nb % l, base);
        }
    }
}

int		main(void)
{
	ft_putnbr_base(-73, "01");
	printf("\n");
	ft_putnbr_base(26, "01234567");
	printf("\n");
	ft_putnbr_base(524627, "0123456789");
	printf("\n");
	ft_putnbr_base(937, "0123456789abcdef");
}