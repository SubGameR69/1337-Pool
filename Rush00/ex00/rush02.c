/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:55:09 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/07/28 13:07:56 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_line(int len, char first, char middle, char last)
{
	int	letter_idx;

	letter_idx = 1;
	while (letter_idx <= len)
	{
		if (letter_idx == 1)
			ft_putchar(first);
		else if (letter_idx == len)
			ft_putchar(last);
		else
			ft_putchar(middle);
		letter_idx++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_idx;

	if (x < 1 || y < 1)
		return ;
	line_idx = 1;
	while (line_idx <= y)
	{
		if (line_idx == 1)
			ft_put_line(x, 'A', 'B', 'A');
		else if (line_idx == y)
			ft_put_line(x, 'C', 'B', 'C');
		else
			ft_put_line(x, 'B', ' ', 'B');
		line_idx++;
	}
}
