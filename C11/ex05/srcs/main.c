/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 14:35:16 by tembu             #+#    #+#             */
/*   Updated: 2019/11/20 17:49:33 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int			check_arguments(char **argv)
{
	if (!(argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' ||
				argv[2][0] == '/' || argv[2][0] == '%'))
	{
		ft_putstr("0\n");
		return (0);
	}
	if (argv[2][0] == '/' && argv[3][0] == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (argv[2][0] == '%' && argv[3][0] == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int			print_calculate(int a, int b, int c)
{
	int(*tab[5])(int a, int b);

	tab[0] = &addition;
	tab[1] = &soustraction;
	tab[2] = &multiplication;
	tab[3] = &modulo;
	tab[4] = &division;
	ft_putnbr((*tab[c])(a, b));
	ft_putchar('\n');
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (check_arguments(argv))
	{
		if (argv[2][0] == '+')
			return (print_calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), 0));
		else if (argv[2][0] == '-')
			return (print_calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), 1));
		else if (argv[2][0] == '*')
			return (print_calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), 2));
		else if (argv[2][0] == '%')
			return (print_calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), 3));
		else if (argv[2][0] == '/')
			return (print_calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), 4));
		else
			ft_putstr("0\n");
	}
	return (0);
}
