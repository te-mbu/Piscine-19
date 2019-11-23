/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:39:17 by tembu             #+#    #+#             */
/*   Updated: 2019/11/20 19:35:55 by tembu            ###   ########.fr       */
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

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
