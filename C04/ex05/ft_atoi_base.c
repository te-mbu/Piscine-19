/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 10:13:24 by tembu             #+#    #+#             */
/*   Updated: 2019/11/15 15:21:53 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			base_check_and_len(char *base)
{
	long int i;
	long int j;

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

int			go_trough_isspaces(char *base, long int i)
{
	while (base[i] == ' ' || base[i] == '\t' || base[i] == '\n' ||
			base[i] == '\r' || base[i] == '\v' || base[i] == '\f')
		i++;
	return (i);
}

int			is_in_base(char c, char *base)
{
	long int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int			base_to_digit(char c, char *base)
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

int			ft_atoi_base(char *str, char *base)
{
	long int	i;
	long int	result;
	long int	neg;
	long int	len_base;

	result = 0;
	neg = 1;
	i = 0;
	len_base = base_check_and_len(base);
	if (!len_base)
		return (result);
	i = go_trough_isspaces(str, i);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && is_in_base(str[i], base))
	{
		result = result * len_base + base_to_digit(str[i], base);
		i++;
	}
	return ((int)result * neg);
}
