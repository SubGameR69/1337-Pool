/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:03:38 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/07/29 19:35:45 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			hex[0] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			hex[1] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			hex[2] = '\0';
			ft_putchar('\\');
			write(1, hex, 2);
		}
		i++;
	}
}
