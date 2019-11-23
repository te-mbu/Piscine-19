/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:46:40 by tembu             #+#    #+#             */
/*   Updated: 2019/11/04 23:21:37 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i++;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((!(ft_is_alphanumeric(str[i])) &&
					(str[i + 1] >= 'a' && str[i + 1] <= 'z')))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
