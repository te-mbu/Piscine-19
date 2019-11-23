/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_strings.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 18:55:52 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 19:41:24 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int			first_string_len(char *str)
{
	int size;

	size = ft_strlen(str);
	if (size % 3 == 1)
		return (1);
	if (size % 3 == 2)
		return (2);
	if (size % 3 == 0)
		return (3);
	return (0);
}

void		fill_first_string(char *str, char **chaine)
{
	int		i;
	int		len_first_string;
	char	*first_str;
	int		count;

	len_first_string = first_string_len(str);
	i = 0;
	first_str = malloc(sizeof(char) * len_first_string + 1);
	if (!first_str)
		return ;
	while (i < len_first_string)
	{
		first_str[i] = str[i];
		i++;
	}
	first_str[i] = '\0';
	write_three_per_three(first_str, chaine);
	count = between_string_of_three(ft_strlen(str));
	ft_between((number_of_strings(str) - 1), chaine);
	free(first_str);
	fill_rest_of_the_string(str, chaine, i);
}

void		fill_rest_of_the_string(char *str, char **chaine, int i)
{
	int		j;
	int		compteur;
	int		len_to_malloc;
	char	*string;
	int		count_min;

	compteur = 0;
	count_min = 1;
	while (compteur < number_of_strings(str) - 1)
	{
		j = 0;
		len_to_malloc = 3;
		string = malloc(sizeof(char) * len_to_malloc + 1);
		if (!string)
			return ;
		while (j < len_to_malloc)
			string[j++] = str[i++];
		string[j] = '\0';
		write_three_per_three(string, chaine);
		ft_between((number_of_strings(str) - 1 - count_min), chaine);
		free(string);
		compteur++;
		count_min++;
	}
}
