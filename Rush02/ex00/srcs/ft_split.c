/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 17:18:08 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 19:50:29 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_splitted(char c)
{
	if (c == ':' || c == '\n' || c == ' ' || c == '\t' ||
			c == '\n' || c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int			count_words(char *str)
{
	unsigned int i;
	unsigned int word_len;
	unsigned int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_splitted(str[i]))
			i++;
		word_len = 0;
		while (str[i + word_len] && !is_splitted(str[i + word_len]))
			word_len++;
		if (word_len)
			count++;
		i += word_len;
	}
	return (count);
}

char		**fill_words(char *str, char **chaine, unsigned int nb_words)
{
	unsigned int i;
	unsigned int j;
	unsigned int word_len;

	i = 0;
	j = 0;
	while (i < nb_words)
	{
		while (str[j] && is_splitted(str[j]))
			j++;
		word_len = 0;
		while (str[j + word_len] && !is_splitted(str[j + word_len]))
			word_len++;
		chaine[i] = malloc(sizeof(char) * word_len + 1);
		if (!chaine[i])
			return (NULL);
		ft_strncpy(chaine[i], &str[j], word_len);
		i++;
		j += word_len;
	}
	return (chaine);
}

char		**ft_split(char *str)
{
	unsigned int	nb_words;
	char			**chaine;

	nb_words = count_words(str);
	chaine = malloc(sizeof(char *) * nb_words + 1);
	if (!chaine)
		return (NULL);
	chaine = fill_words(str, chaine, nb_words);
	chaine[nb_words] = 0;
	return (chaine);
}
