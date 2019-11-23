/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmehadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:17:58 by lmehadji          #+#    #+#             */
/*   Updated: 2019/11/11 10:01:13 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count(int *cr)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = 0;
	while (++i < 4)
	{
		if (cr[i] > j)
		{
			j = cr[i];
			k++;
		}
	}
	return (k);
}

void	test(int src[][4], int *dest, int index)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (index < 8)
		{
			if (index < 4)
				dest[i] = src[i][index];
			else
				dest[i] = src[3 - i][index - 4];
		}
		else
		{
			if (index < 12)
				dest[i] = src[index - 8][i];
			else
				dest[i] = src[index - 12][3 - i];
		}
	}
}
