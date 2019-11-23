/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:41:09 by exam              #+#    #+#             */
/*   Updated: 2019/11/08 20:10:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_an_isspace(char c)
{
		if (c == ' ' || c == '\t' || c == '\n')
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
		while (str[i] && is_an_isspace(str[i]))
			i++;
		word_len = 0;
		while (str[i + word_len] && !is_an_isspace(str[i + word_len]))
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
		while (str[j] && is_an_isspace(str[j]))
			j++;
		word_len = 0;
		while (str[j + word_len] && !is_an_isspace(str[j + word_len]))
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

char    	**ft_split(char *str)
{
	unsigned int nb_words;
	char **chaine;

	nb_words = count_words(str);
	chaine = malloc(sizeof(char *) * nb_words + 1);
	if (!chaine)
		return (NULL);
	chaine = fill_words(str, chaine, nb_words);
	chaine[nb_words] = 0;
	return (chaine);
}
