/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:41:59 by antferna          #+#    #+#             */
/*   Updated: 2023/04/26 13:15:29 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;

	if (lst == NULL)
		return (NULL);
	res = malloc(sizeof(t_list));
	if (res == NULL)
		return (NULL);
	res->content = f(lst->content);
	res->next = ft_lstmap(lst->next, f, del);
	return (res);
}
