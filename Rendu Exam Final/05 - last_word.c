/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:27:02 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 10:35:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_a_space(char c)
{
	if (c == ' ' || c ==  '\t')
		return (1);
	return (0);
}

void		ft_last_word(char *str)
{
	int i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		i++;
	i--;
	while (str[i] && is_a_space(str[i]))
		i--;
	while (str[i] && !is_a_space(str[i]))
		i--;
	i++;
	while (str[i] && !is_a_space(str[i]))
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
