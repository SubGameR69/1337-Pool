/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:18:39 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/08/05 10:37:55 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	number;

	len = ft_strlen(base);
	number = nbr;
	if (check_base(base))
	{
		if (number < 0)
		{
			ft_putchar('-');
			number *= -1;
		}
		if (number < len)
		{
			ft_putchar(base[number]);
		}
		if (number >= len)
		{
			ft_putnbr_base(number / len, base);
			ft_putnbr_base(number % len, base);
		}
	}
}
