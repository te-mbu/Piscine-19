/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:13:30 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 11:29:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *next_list;
	t_list *tmp;

	if (begin_list && *begin_list)
		list = *begin_list;
	if (begin_list && *begin_list && cmp(list->data, data_ref) == 0)
	{
		next_list = list->next;
		free(list);
		*begin_list = next_list;
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else if (begin_list && *begin_list)
	{
		next_list = list->next;
		while (next_list)
		{
			if (cmp(next_list->data, data_ref) == 0)
			{
				tmp = next_list->next;
				free(next_list);
				next_list = tmp;
				list->next = next_list;
			}
			else
			{
				list = next_list;
				next_list = list->next;
			}
		}
	}
}
