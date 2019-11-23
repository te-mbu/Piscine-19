/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:44:16 by tembu             #+#    #+#             */
/*   Updated: 2019/11/19 16:27:38 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	long int i;
	long int size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(**range) * size);
	if (!(*range))
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
