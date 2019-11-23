/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmehadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:47:44 by lmehadji          #+#    #+#             */
/*   Updated: 2019/11/10 17:47:49 by lmehadji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

void	ft_add(int tab[4], int i, int j, int k);
void	test(int src[][4], int *dest, int index);
int		count(int *cr);
int		solve(int tab[][4], int s[][12][4], int *pov, int pos);
void	ft_matrix(int tab[][4]);
void	message_error(void);
void	init_tab(int tab[4][4]);
void	ft_init(int s[4][12][4]);
void	mini_atoi(int pov[16], char **input);
int		input_correct(char *input);

#endif
