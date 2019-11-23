/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:57:08 by tembu             #+#    #+#             */
/*   Updated: 2019/11/20 14:43:44 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		addition(int a, int b);
int		soustraction(int a, int b);
int		multiplication(int a, int b);
int		modulo(int a, int b);
int		division(int a, int b);
int		check_arguments(char **argv);

#endif
