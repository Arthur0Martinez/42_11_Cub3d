/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarrar <iarrar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:21:25 by iarrar            #+#    #+#             */
/*   Updated: 2023/04/26 18:22:19 by iarrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countchar(const char *str, char c)
{
	int	i;
	int	s;

	s = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			s++;
		i++;
	}
	return (s);
}
