/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:32:49 by csouza-f          #+#    #+#             */
/*   Updated: 2020/02/03 18:38:48 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned long int n)
{
	unsigned char		*src1;
	unsigned char		*dst1;
	unsigned long int	i;

	src1 = (unsigned char*)src;
	dst1 = (unsigned char*)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
