/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:52 by tembu             #+#    #+#             */
/*   Updated: 2019/11/04 12:44:34 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int middle;
	int swap;
	int i;

	middle = size / 2;
	swap = 19;
	i = 0;
	while (i < middle)
	{
		swap = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = swap;
		i++;
		size--;
	}
}
