/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:07:48 by csouza-f          #+#    #+#             */
/*   Updated: 2020/02/03 18:49:26 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!l[i])
		return ((char *)b);
	while (i < len && b[i])
	{
		j = 0;
		while (i + j < len && b[i + j] == l[j])
		{
			if (!l[j + 1])
				return ((char *)&b[i]);
			j++;
		}
		i++;
	}
	return (0);
}
