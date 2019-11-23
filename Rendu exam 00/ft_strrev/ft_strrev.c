/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:31:07 by exam              #+#    #+#             */
/*   Updated: 2019/11/01 17:38:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	int size;
	int middle;
	int swap;

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
