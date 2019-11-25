/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:51:26 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 11:11:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_a_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strncpy(char *dest, char *src, int n)
{
	int i;

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
	int i;
	int word_len;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_a_space(str[i]))
			i++;
		word_len = 0;
		while (str[i + word_len] && !is_a_space(str[i + word_len]))
			word_len++;
		if (word_len)
			count++;
		i += word_len;
	}
	return (count);
}

char		**fill_string(char **final_string, char *str, int nb_words)
{
	int i;
	int j;
	int word_len;

	i = 0;
	j = 0;
	while (i < nb_words)
	{
		while (str[j] && is_a_space(str[j]))
			j++;
		word_len = 0;
		while (str[j + word_len] && !is_a_space(str[j + word_len]))
			word_len++;
		final_string[i] = malloc(sizeof(char) * word_len + 1);
		if (!final_string)
			return (NULL);
		ft_strncpy(final_string[i], &str[j], word_len);
		j += word_len;
		i++;
	}
	return (final_string);
}

char		**ft_split(char *str)
{
	int nb_words;
	char **final_string;

	if (!str)
		return (NULL);
	nb_words = count_words(str);
	final_string = malloc(sizeof(char *) * nb_words + 1);
	if (!final_string)
		return (NULL);
	final_string = fill_string(final_string, str, nb_words);
	final_string[nb_words] = 0;
	return (final_string);
}
