/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:41:01 by csouza-f          #+#    #+#             */
/*   Updated: 2020/02/03 18:57:16 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*j;
	char	*str;

	i = 0;
	j = 0;
	str = (char*)s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			j = &str[i];
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	if (j)
		return (j);
	return (0);
}
