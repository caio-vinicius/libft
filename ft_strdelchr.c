/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <csouza-f@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:48:25 by caio              #+#    #+#             */
/*   Updated: 2021/11/24 21:36:19 by caio-proj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdelchr(const char *str, char c)
{
	int		i;
	int		j;
	char	*s;
	char	*newstr;

	i = 0;
	j = 0;
	s = (char *)str;
	newstr = malloc(ft_strlen(s) - ft_strcountchr(s, c) + 1)
		if (!newstr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			newstr[j] = s[i];
			j++;
		}
		i++;
	}
	return (newstr);
}
