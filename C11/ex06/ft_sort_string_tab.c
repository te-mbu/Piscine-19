/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:40:37 by tembu             #+#    #+#             */
/*   Updated: 2019/11/21 12:47:00 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		ft_sort_string_tab(char **tab)
{
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while (tab[len])
		len++;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
