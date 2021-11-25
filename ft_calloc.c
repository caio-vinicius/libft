/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 17:45:26 by csouza-f          #+#    #+#             */
/*   Updated: 2021/11/24 21:18:29 by caio-proj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(unsigned long int count, unsigned long int size)
{
	void				*ptr;
	unsigned long int	maxlen;

	maxlen = count * size;
	ptr = malloc(maxlen)
		if (!ptr)
		return (0);
	ft_bzero(ptr, maxlen);
	return (ptr);
}
