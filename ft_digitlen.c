/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <csouza-f@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 17:25:33 by caio              #+#    #+#             */
/*   Updated: 2021/11/24 21:34:10 by caio-proj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitlen(const char *s)
{
	int	i;

	i = 0;
	while (ft_isdigit(s[i]))
		i++;
	return (i);
}
