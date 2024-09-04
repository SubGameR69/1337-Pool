/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:44:48 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/08/12 16:04:08 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}
