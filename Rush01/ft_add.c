/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmehadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:28:49 by lmehadji          #+#    #+#             */
/*   Updated: 2019/11/11 09:59:07 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_add(int tab[4], int i, int j, int k)
{
	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	tab[3] = 10 - i - j - k;
}
