/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:18:17 by csouza-f          #+#    #+#             */
/*   Updated: 2020/06/10 18:38:59 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	resp_atoi_base(const char *str, int signal, int base)
{
	int i;
	int resp;

	i = 0;
	resp = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resp = (resp * base) + str[i] - 48;
		i++;
	}
	return (resp * signal);
}

int	ft_atoi_base(const char *str, int base)
{
	int	i;
	int signal;

	i = 0;
	signal = 1;
	if (!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (ft_isminus(str[i]) || ft_isplus(str[i]))
	{
		if (ft_isminus(str[i]))
			signal *= -1;
		i++;
	}
	return (resp_atoi_base((char *)&str[i], signal, base));
}
