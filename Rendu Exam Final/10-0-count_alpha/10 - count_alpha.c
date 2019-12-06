/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:32:29 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 14:27:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int			count_already_seen(char *str, int pos, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i <= pos)
	{
		if (c == str[i])
		{
			count++;
		}
		i++;
	}
	return (count);
}

int			already_seen(char *str, int pos, char c)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}
void		print_result(int occurence, char letter)
{
	printf("%d%c", occurence, letter);
}

void		count_alpha(char *str)
{
	int i;
	int len;
	int pos_last_char;
	int count;
	int not_alpha;

	i = 0;
	len = ft_strlen(str);
	count = 0;
	not_alpha = 0;
	while (str[i])
		i++;
	i--;
	pos_last_char = i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (!is_alpha(str[i]))
			not_alpha++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (is_alpha(str[i]) && !already_seen(str, i, str[i]))
		{
			print_result(count_already_seen(str, pos_last_char, str[i]), str[i]);
			count += count_already_seen(str, pos_last_char, str[i]);
		}
		if ((count + not_alpha) != len && !already_seen(str, i, str[i]) && is_alpha(str[i]))
			printf(", ");
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		count_alpha(argv[1]);
	}
	printf("\n");
	return (0);
}
