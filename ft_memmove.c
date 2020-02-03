/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:58:16 by csouza-f          #+#    #+#             */
/*   Updated: 2020/02/03 18:40:06 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned long int len)
{
	unsigned char		*dst1;
	unsigned char		*src1;
	unsigned long int	i;

	dst1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (dst1 > src1)
	{
		i = len;
		while (i > 0)
		{
			dst1[i - 1] = src1[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst1);
}
