/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:56:51 by tembu             #+#    #+#             */
/*   Updated: 2019/11/20 17:48:36 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		addition(int a, int b)
{
	return (a + b);
}

int		soustraction(int a, int b)
{
	return (a - b);
}

int		multiplication(int a, int b)
{
	return (a * b);
}

int		modulo(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}

int		division(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}
