/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:54:07 by pperigau          #+#    #+#             */
/*   Updated: 2022/08/15 14:05:37 by pperigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= 'A' && *str <= 'Z'))
            return (0);
        str++;
    }
    return (1);
}
