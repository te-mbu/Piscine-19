/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:19:36 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 20:25:59 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		main(int argc, char **argv)
{
	long int	len;
	char		*dest;
	char		**chaine;

	if (argc == 2)
	{
		len = len_dico();
		dest = dic_to_string(len);
		chaine = ft_split(dest);
		fill_first_string(argv[1], chaine);
		return (0);
	}
	ft_putstr("Error\n");
	return (0);
}
