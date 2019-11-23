/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:36:17 by tembu             #+#    #+#             */
/*   Updated: 2019/11/19 20:13:11 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int number_element;

	i = 0;
	number_element = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			number_element++;
		i++;
	}
	return (number_element);
}
