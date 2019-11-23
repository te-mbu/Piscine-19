/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_three_per_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 18:54:25 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 20:25:56 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void	ft_centaine(char *str, char **chaine)
{
	write_nb_len_one(str[0], chaine);
	write_nb("100", chaine);
}

void	ft_dizaine_different_one(char *tmp_malloc, char *str, char **chaine)
{
	int size;
	int i;
	int len;

	i = 1;
	len = 2;
	size = ft_strlen(str);
	tmp_malloc = malloc(sizeof(char) * len + 1);
	if (!tmp_malloc)
		return ;
	tmp_malloc[0] = str[size - 2];
	while (i < len)
	{
		tmp_malloc[i] = '0';
		i++;
	}
	tmp_malloc[len] = '\0';
	write_nb(tmp_malloc, chaine);
	free(tmp_malloc);
}

void	ft_dizaine_equal_one(char *tmp_malloc, char *str, char **chaine)
{
	int i;
	int len;
	int size;

	i = 1;
	len = 2;
	size = ft_strlen(str);
	tmp_malloc = malloc(sizeof(char) * len + 1);
	if (!tmp_malloc)
		return ;
	tmp_malloc[0] = str[size - 2];
	tmp_malloc[1] = str[size - 1];
	tmp_malloc[2] = '\0';
	write_nb(tmp_malloc, chaine);
	free(tmp_malloc);
}

void	write_three_per_three(char *str, char **chaine)
{
	char	*tmp_malloc;
	int		size;

	size = ft_strlen(str);
	tmp_malloc = NULL;
	if (size == 3)
		ft_centaine(str, chaine);
	if ((size == 3 || size == 2) && str[size - 2] != '1')
		ft_dizaine_different_one(tmp_malloc, str, chaine);
	if ((size == 3 || size == 2) && str[size - 2] == '1')
	{
		ft_dizaine_equal_one(tmp_malloc, str, chaine);
		return ;
	}
	if ((size == 3 || size == 2 || size == 1) && str[size - 1])
		write_nb_len_one(str[size - 1], chaine);
}
