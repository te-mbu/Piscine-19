/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmehadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:06:02 by lmehadji          #+#    #+#             */
/*   Updated: 2019/11/11 09:58:14 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		input_correct(char *input)
{
	int i;
	int number;

	i = -1;
	number = 0;
	while (input[++i])
	{
		if (i % 2 == 0)
		{
			if (!('1' <= input[i] && input[i] <= '4'))
				return (0);
			else
				number++;
		}
		else
		{
			if (input[i] != ' ')
				return (0);
		}
	}
	if (number != 16 || i > 31)
		return (0);
	return (number);
}

void	mini_atoi(int tab[16], char **input)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (input[1][++i])
		if (input[1][i] >= '0' && input[1][i] <= '9')
			tab[j++] = input[1][i] - 48;
}
