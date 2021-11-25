/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:39:40 by csouza-f          #+#    #+#             */
/*   Updated: 2021/11/24 21:33:48 by caio-proj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(unsigned int value, size_t base)
{
	int				i;
	char			*str;
	unsigned int	tmp;

	i = 0;
	tmp = value;
	while (tmp >= base)
	{
		tmp = tmp / base;
		i++;
	}
	str = (char *)ft_calloc((i + 1), sizeof(char))
		if (!str)
		return (NULL);
	while (i >= 0)
	{
		tmp = value % base;
		if (tmp >= 10)
			str[i] = tmp - 10 + 'a';
		else
			str[i] = tmp + '0';
		value /= base;
		i--;
	}
	return (str);
}
