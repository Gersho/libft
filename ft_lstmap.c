/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:24:23 by kzennoun          #+#    #+#             */
/*   Updated: 2020/12/01 02:21:46 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
/* 	t_list	*ptr;
	t_list	*temp;
	t_list	*first;

	if (!lst)
		return (NULL);
	ptr = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
			ft_lstclear(ptr, (*del));
		ft_lstadd_back(&ptr, temp);
		lst = lst->next; */
	}
}
