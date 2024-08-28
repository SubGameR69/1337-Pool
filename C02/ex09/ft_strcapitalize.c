/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:00:48 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/07/29 10:30:07 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	check_printable(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (check_printable(str[i]))
		{
			if (capitalize)
			{
				str[i] = to_upper(str[i]);
				capitalize = 0;
			}
			else
				str[i] = to_lower(str[i]);
		}
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
