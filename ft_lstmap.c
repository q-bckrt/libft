/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbackaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:09:14 by qbackaer          #+#    #+#             */
/*   Updated: 2018/11/20 16:09:40 by qbackaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*procd_list;

	if (!lst || !f)
		return (NULL);
	procd_list = f(lst);
	procd_list->next = ft_lstmap(lst->next, f);
	return (procd_list);
}
