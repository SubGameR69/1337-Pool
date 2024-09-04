/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:36:40 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/08/12 15:43:44 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
