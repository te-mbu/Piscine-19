/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:49:29 by tembu             #+#    #+#             */
/*   Updated: 2019/11/13 16:32:31 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			total_len(int size, char **strs, char *sep)
{
	int count;
	int size_fin;
	int i;

	i = 0;
	size_fin = size;
	count = 0;
	while (size > 0)
	{
		count += ft_strlen(strs[i]);
		i++;
		size--;
	}
	count += ((ft_strlen(sep) * (size_fin - 1)) + 1);
	return (count);
}

char		*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char		*final_string(char *chaine, int size,
		char **strs, char *sep)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_strcat(chaine, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(chaine, sep);
		}
		i++;
	}
	return (chaine);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*chaine;
	char	*vide;
	int		totallen;

	i = 0;
	vide = malloc(sizeof(char) * 0);
	if (size == 0)
		return (vide);
	totallen = total_len(size, strs, sep);
	chaine = malloc(sizeof(char) * totallen);
	chaine[0] = '\0';
	if (!chaine)
		return (NULL);
	chaine = final_string(chaine, size, strs, sep);
	chaine[totallen - 1] = '\0';
	return (chaine);
}
