/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:05:13 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/08/12 16:52:31 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!src)
		return (0);
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_size(int size, char **strs, char *sep)
{
	int	i;
	int	total_size;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	total_size += ft_strlen(sep) * (size - 1) + 1;
	return (total_size);
}

char	*ft_join_strs(int size, char **strs, char *sep, char *result)
{
	int	i;

	i = 0;
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		result_size;

	if (size <= 0)
	{
		result = malloc(sizeof(char));
		if (!result)
			return (0);
		*result = '\0';
		return (result);
	}
	result_size = total_size(size, strs, sep);
	result = malloc(result_size * sizeof(char));
	if (!result)
		return (0);
	return (ft_join_strs(size, strs, sep, result));
}
