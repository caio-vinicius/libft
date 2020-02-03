/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:24:18 by csouza-f          #+#    #+#             */
/*   Updated: 2020/02/03 16:15:47 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_itoa(int n, int count, char *str)
{
	unsigned int	num;

	str[count] = 0;
	count--;
	num = (n > 0) ? n : -n;
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
	int				count;
	unsigned int	num;
	char			*str;

	count = (n > 0) ? 0 : 1;
	num = (n > 0) ? n : -n;
	if (n == 0)
	{
		if (!(str = malloc(count + 1)))
			return (NULL);
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	while (num)
	{
		count++;
		num /= 10;
	}
	if (!(str = malloc(count + 1)))
		return (NULL);
	return (make_itoa(n, count, str));
}
