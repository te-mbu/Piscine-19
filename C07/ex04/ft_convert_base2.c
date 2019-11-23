/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:25:22 by tembu             #+#    #+#             */
/*   Updated: 2019/11/21 01:04:35 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int			base_check_and_len(char *base);
long int	ft_atoi_base(char *nbr_from, char *base_from,
		long int len_base_from);

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long int	nb_char(long int value, long int len_base)
{
	if (value < 0)
		return (1 + nb_char(value * (-1), len_base));
	if (value < len_base)
		return (1);
	return (1 + nb_char(value / len_base, len_base));
}

void		fill_string(char *final_string, long int value,
		char *base, long int len_base)
{
	long int len_number;

   	len_number = nb_char(value, len_base);
	if (value >= len_base)
		fill_string(final_string, (value / len_base), base, len_base);
	final_string[len_number - 1] = base[value % len_base];
}

char		*decimal_to_base(long int result_base_from,
		char *base_to, long int len_base_to)
{
	char		*nbr_base_to;
	long int	nb_len;

	nb_len = nb_char(result_base_from, len_base_to);
	nbr_base_to = malloc(sizeof(*nbr_base_to) * (nb_len + 1));
	if (!nbr_base_to)
		return (NULL);
	if (result_base_from < 0)
	{
		result_base_from *= -1;
		nbr_base_to[0] = '-';
	}
	fill_string(nbr_base_to, result_base_from, base_to, nb_len);
	nbr_base_to[nb_len] = '\0';
	return (nbr_base_to);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*result_base_to;
	long int	len_base_to;
	long int	len_base_from;
	long int	result_base_from;

	len_base_from = base_check_and_len(base_from);
	len_base_to = base_check_and_len(base_to);
	if (!len_base_from)
		return (NULL);
	if (!len_base_to)
		return (NULL);
	result_base_from = ft_atoi_base(nbr, base_from, len_base_from);
	if (!result_base_from)
		return (NULL);
	result_base_to = decimal_to_base(result_base_from, base_to, len_base_to);
	if (!result_base_to)
		return (NULL);
	return (result_base_to);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
