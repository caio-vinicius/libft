/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:24:18 by csouza-f          #+#    #+#             */
/*   Updated: 2021/11/24 21:51:13 by caio-proj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_itoa(int n, int count, char *str)
{
	unsigned int	num;

	str[count] = 0;
	count--;
	if (n > 0)
		num = n;
	else
		num = -n;
	while (num)
	{
		str[count] = (num % 10) + '0';
		num /= 10;
		count--;
	}
	if (!count)
		str[count] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				count;
	char			*str;

	if (n > 0)
	{
		count = 0;
		num = n;
	}
	else
	{
		count = 1;
		num = -n;
	}
	if (n == 0)
	{
		str = malloc(count + 1);
			if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	while (num && count++)
		num /= 10;
	str = malloc(count + 1);
		if (!str)
		return (NULL);
	return (make_itoa(n, count, str));
}
