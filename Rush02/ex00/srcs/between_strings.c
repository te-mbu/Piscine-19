/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   between_strings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:03:21 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 21:08:52 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void	ft_between(int count, char **chaine)
{
	if (count == 1)
		write_nb("1000", chaine);
	if (count == 2)
		write_nb("1000000", chaine);
	if (count == 3)
		write_nb("1000000000", chaine);
	if (count == 4)
		write_nb("1000000000000", chaine);
	if (count == 5)
		write_nb("1000000000000000", chaine);
	if (count == 6)
		write_nb("1000000000000000000", chaine);
	if (count == 7)
		write_nb("1000000000000000000000", chaine);
	if (count == 8)
		write_nb("1000000000000000000000000", chaine);
	if (count == 9)
		write_nb("1000000000000000000000000000", chaine);
	if (count == 10)
		write_nb("1000000000000000000000000000000", chaine);
	if (count == 11)
		write_nb("1000000000000000000000000000000000", chaine);
	if (count == 12)
		write_nb("1000000000000000000000000000000000000", chaine);
}

int		between_string_of_three(int size)
{
	int count;

	count = 0;
	if (size % 3 == 0)
		count = size / 3;
	else if (size % 3 != 0)
		count = (size / 3) + 1;
	return (count);
}

int		number_of_strings(char *str)
{
	int size;
	int i;

	size = ft_strlen(str);
	i = 0;
	if (size % 3 != 0)
		i++;
	i = i + (size / 3);
	return (i);
}
