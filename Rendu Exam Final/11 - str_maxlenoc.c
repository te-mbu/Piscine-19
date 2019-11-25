/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:30:09 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 17:55:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int			is_in_result(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char		*find_longest_str(char *str1, char *str2)
{
	int i;
	int j;
	int word_len;
	char *longest_atm;
	int index;
	i = 0;
	index = 0;
	if (!str1 || !str2)
		return (NULL);
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			word_len = 0;
			if (str1[i + word_len] == str2[j + word_len])
			{
				while (str1[i + word_len] == str2[j + word_len])
					word_len++;
				longest_atm = malloc(sizeof(char) * (word_len + 1));
				if (!longest_atm)
					return (NULL);
				ft_strncpy(longest_atm, &str1[i], word_len);
				longest_atm[word_len] = '\0';
				return (longest_atm);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}


int			main(int argc, char **argv)
{
	int i;
	int j;
	int index;
	char *temp;
	char *temp_one;
	int allez;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	index = 0;
	j = 3;
	temp_one = find_longest_str(argv[1], argv[2]);
	while (argc - 2 > 1)
	{
		temp = find_longest_str(temp_one, argv[j]);
		j++;
		argc--;
	}
	allez = 1;
	while (argv[allez])
	{
		if (!argv[allez])
		{
			write(1, "\n", 1);
			return (0);

		}
		if (!is_in_result(argv[allez], temp))
		{
			write(1, "\n", 1);
			return (0);
		}
		allez++;
	}
	ft_putstr(temp);
	write(1, "\n", 1);
	return (0);
}
