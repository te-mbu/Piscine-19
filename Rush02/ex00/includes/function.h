/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:58:12 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 19:32:01 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 1000

void		write_nb(char *str, char **chaine);
void		write_nb_len_one(char c, char **chaine);
int			ft_strlen(char *str);
char		*ft_strdup(char *src);
void		write_three_per_three(char *str, char **chaine);
void		fill_rest_of_the_string(char *str, char **chainei, int i);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		**ft_split(char *str);
char		*ft_strdup(char *src);
void		ft_between(int count, char **chaine);
int			first_string_len(char *str);
int			between_string_of_three(int size);
int			number_of_strings(char *str);
void		fill_first_string(char *str, char **chaine);
void		fill_rest_of_the_string(char *str, char **chaine, int i);
long int	len_dico();
char		*dic_to_string(long int len);

#endif
