/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:46:15 by tembu             #+#    #+#             */
/*   Updated: 2019/11/21 15:41:58 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sorted;
	int sorted_v2;

	i = 0;
	sorted = 1;
	sorted_v2 = 1;
	if (length == 1)
		return (1);
	else
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				sorted = 0;
			i++;
		}
		i = -1;
		while (++i < length - 1)
			if ((*f)(tab[i], tab[i + 1]) > 0)
				sorted_v2 = 0;
		if (sorted_v2 || sorted)
			return (1);
	}
	return (0);
}
