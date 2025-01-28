/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:16:41 by andalmei          #+#    #+#             */
/*   Updated: 2025/01/28 15:21:19 by andalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	write(1, str, c);
}

/*int	main(void)
{
	char	*str;

	str = "Frase Teste";
	ft_putstr(str);
	return (0);
}*/
