/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:24:55 by tembu             #+#    #+#             */
/*   Updated: 2019/11/20 10:35:58 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				base_check_and_len(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\t' ||
				base[i] == '\n' || base[i] == '\r' || base[i] == '\v' ||
				base[i] == '\f' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

long int		go_trough_isspaces(char *base, long int i)
{
	while (base[i] == ' ' || base[i] == '\t' || base[i] == '\n' ||
			base[i] == '\r' || base[i] == '\v' || base[i] == '\f')
		i++;
	return (i);
}

int				is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

long int		base_to_digit(char c, char *base)
{
	long int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

long int		ft_atoi_base(char *nbr_from, char *base_from,
		long int len_base_from)
{
	long int	i;
	long int	result;
	long int	neg;

	result = 0;
	neg = 1;
	i = 0;
	i = go_trough_isspaces(nbr_from, i);
	while (nbr_from[i] && (nbr_from[i] == '-' || nbr_from[i] == '+'))
	{
		if (nbr_from[i] == '-')
			neg *= -1;
		i++;
	}
	while (nbr_from[i] && is_in_base(nbr_from[i], base_from))
	{
		result = result * len_base_from + base_to_digit(nbr_from[i], base_from);
		i++;
	}
	return (result * neg);
}
