#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int s;
    int r;

    i = 0;
    s = 1;
    r = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            s = s * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - '0');
        i++;
    }
    return (r * s);
}

int	main(void)
{
	char	*s;

	s =  " ---+--+1234ab567";
	printf("%d", ft_atoi(s));
}