/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:25:38 by exam              #+#    #+#             */
/*   Updated: 2019/11/08 19:27:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*rev_string(char *str)
{
	int size;
	int i;
	int  swap;
	int middle;

	i = 0;
	size = ft_strlen(str);
	middle = size / 2;
	while (i < middle)
	{
		swap = str[i];
		str[i] = str[size - 1];
		str[size - 1] = swap;
		i++;
		size--;
	}
	return (str);
}

void		find_last(char *str)
{
	int i;
	int word_len;
	int size;
	i = 0;
	word_len = 0;
	size = ft_strlen(str);
	while (i <= size)
	{
		while (str[i + word_len] && (str[i] == ' ' || str[i] == '\t'))
		{
			i++;
		}
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ' && str[i + word_len] != '\t')
			word_len++;
		if (i + word_len == size)
		{
			ft_putstr(str + i);
			return ;
		}
		else
			i += word_len;
	}
}

void		ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	rev_string(str);

	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	rev_string(str + i);
	find_last(str + i);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\n');
	return (0);
}
