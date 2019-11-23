/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:11:39 by tembu             #+#    #+#             */
/*   Updated: 2019/11/18 17:41:54 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
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

int			count_words(char *str, char *charset)
{
	int i;
	int word_len;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		while (str[i] && is_in_charset(str[i], charset))
			i++;
		word_len = 0;
		while (str[i + word_len] && !is_in_charset(str[i + word_len], charset))
			word_len++;
		if (word_len)
			nb_words++;
		i += word_len;
	}
	return (nb_words);
}

char		**fill_words(char *str, char *charset, char **result,
		unsigned int nb_words)
{
	unsigned int i;
	unsigned int j;
	unsigned int word_len;

	i = 0;
	j = 0;
	while (i < nb_words)
	{
		while (str[j] && is_in_charset(str[j], charset))
			j++;
		word_len = 0;
		while (str[j + word_len] && !is_in_charset(str[j + word_len], charset))
			word_len++;
		result[i] = malloc(sizeof(char) * (word_len + 1));
		if (!result[i])
			return (NULL);
		ft_strncpy(result[i], &str[j], word_len);
		j += word_len;
		i++;
	}
	return (result);
}

char		**ft_split(char *str, char *charset)
{
	char			**result;
	unsigned int	nb_words;

	nb_words = count_words(str, charset);
	result = malloc(sizeof(char *) * (nb_words + 1));
	if (!result)
		return (NULL);
	result = fill_words(str, charset, result, nb_words);
	result[nb_words] = 0;
	return (result);
}
