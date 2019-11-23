/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 22:03:41 by tembu             #+#    #+#             */
/*   Updated: 2019/11/06 19:42:16 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
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
	return (1);
}

void		write_base(long int nb, char *base, long int len_base)
{
	int div;
	int mod;

	div = nb / len_base;
	mod = nb % len_base;
	if (div)
		write_base(div, base, len_base);
	ft_putchar(base[mod]);
}

void		ft_putnbr_base(int nbr, char *base)
{
	long int len_base;
	long int nb;

	if (check_base(base))
	{
		len_base = ft_strlen(base);
		nb = nbr;
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		write_base(nb, base, len_base);
	}
}
