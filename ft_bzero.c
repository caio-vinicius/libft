/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:59:05 by csouza-f          #+#    #+#             */
/*   Updated: 2020/01/31 16:26:17 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long int n)
{
	unsigned char		*str;
	unsigned long int	i;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
