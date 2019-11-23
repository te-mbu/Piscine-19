/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmehadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:51:27 by lmehadji          #+#    #+#             */
/*   Updated: 2019/11/11 09:53:55 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		main(int argc, char **argv)
{
	int		pov[16];
	int		tab[4][4];
	int		s[4][12][4];

	if (argc != 2 || !(input_correct(argv[1])))
	{
		message_error();
		return (0);
	}
	init_tab(tab);
	ft_init(s);
	mini_atoi(pov, argv);
	if (solve(tab, s, pov, 0))
		ft_matrix(tab);
	else
		message_error();
	return (0);
}
