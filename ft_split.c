/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:35:04 by csouza-f          #+#    #+#             */
/*   Updated: 2021/11/24 21:50:10 by caio-proj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cwords(char const *s, char c)
{
	int		i;
	int		word;
	int		count;

	i = 0;
	word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		else if (s[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*makeword(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(i + 1);
	if (!word)
		return (NULL);
	word[i] = 0;
	i--;
	while (i >= 0)
	{
		word[i] = s[i];
		i--;
	}
	return (word);
}

static char	**malloc_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((cwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	static int	word;
	char		**split;
	int			count;
	int			i;

	split = malloc_split(s, c);
	if (!split)
		return (NULL);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		else if (s[i] != c && word == 0)
		{
			word = 1;
			split[count] = makeword(&s[i], c);
			if (!split)
				return (NULL);
			count++;
		}
		i++;
	}
	return (split);
}
