/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:50:58 by tembu             #+#    #+#             */
/*   Updated: 2019/11/20 10:31:31 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	tab = NULL;
	size = max - min;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
