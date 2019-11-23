/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:23:15 by exam              #+#    #+#             */
/*   Updated: 2019/11/15 17:33:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int            ft_atoi(const char *str)
{
    int i;
    int result;
    int neg;
    
    i = 0;
    result = 0;
    neg = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
        i++;
    if (str[i] == '-')
    {
        neg *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * neg);
}
