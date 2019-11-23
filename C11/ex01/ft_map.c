/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 10:43:45 by tembu             #+#    #+#             */
/*   Updated: 2019/11/19 20:11:57 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *dest;
	int i;

	i = 0;
	dest = malloc(sizeof(int) * length);
	if (!dest)
		return (NULL);
	while (i < length)
	{
		dest[i] = (*f)(tab[i]);
		i++;
	}
	return (dest);
}
