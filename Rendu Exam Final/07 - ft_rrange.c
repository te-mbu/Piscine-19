/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:42:53 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 10:49:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *tab;
	int size;
	int min_size;
	int i;

	size = end - start + 1;
	min_size = start - end + 1;
	i = 0;
	if (start < end)
	{
		tab = malloc(sizeof(int) * size);
		if (!tab)
			return (NULL);
		while (i < size)
		{
			tab[i] = end;
			i++;
			end--;
		}
		return (tab);
	}
	else if (start > end)
	{
		tab = malloc(sizeof(int) * min_size);
		if (!tab)
			return (NULL);
		while (i < min_size)
		{
			tab[i] = end;
			i++;
			end++;
		}
		return (tab);
	}
	else
	{
		tab = malloc(sizeof(int) * 1);
		if (!tab)
			return (NULL);
		tab[i] = end;
		return (tab);
	}
	return (0);
}
