/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:28:21 by csouza-f          #+#    #+#             */
/*   Updated: 2020/02/03 19:00:10 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned long int len)
{
	unsigned long int	i;
	char				*str;

	i = 0;
	if (!s || !(str = malloc(len + 1)))
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
