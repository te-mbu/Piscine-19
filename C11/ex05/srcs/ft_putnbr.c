/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:10:59 by tembu             #+#    #+#             */
/*   Updated: 2019/11/20 17:49:14 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"
#include <unistd.h>

void		ft_putnbr(int nb)
{
	int div;
	int mod;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb *= -1;
	}
	div = nb / 10;
	mod = nb % 10;
	if (div != 0)
		ft_putnbr(div);
	ft_putchar(mod + 48);
}
