/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:37:56 by liulm             #+#    #+#             */
/*   Updated: 2024/07/20 11:08:15 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 0;
	if (x >= 1)
	{
		ft_putchar('A');
		if (x > 1)
		{
			while (i < (x - 2))
			{
				ft_putchar('B');
				i++;
			}
			ft_putchar('A');
		}
		ft_putchar('\n');
	}
}

void	middle_line(int x)
{
	int	i;

	i = 0;
	if (x >= 1)
	{
		ft_putchar('B');
		if (x > 1)
		{
			while (i < (x - 2))
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	last_line(int x)
{
	int	i;

	i = 0;
	if (x >= 1)
	{
		ft_putchar('C');
		if (x > 1)
		{
			while (i < (x - 2))
			{
				ft_putchar('B');
				i++;
			}
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1 && x >= 1)
	{
		first_line(x);
		if (y > 1)
		{
			while (i <= (y - 3))
			{
				middle_line(x);
				i++;
			}
			last_line(x);
		}
	}
}
