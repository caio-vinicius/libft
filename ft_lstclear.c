/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:37:32 by csouza-f          #+#    #+#             */
/*   Updated: 2020/01/31 12:58:12 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *tempnext;

	temp = *lst;
	while (temp)
	{
		tempnext = temp->next;
		del(temp->content);
		free(temp);
		temp = temp->next;
	}
	*lst = 0;
}
