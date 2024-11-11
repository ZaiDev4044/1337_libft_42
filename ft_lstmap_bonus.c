/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:32:55 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/05 11:55:02 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_content;
	void	*content_tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content_tmp = f(lst->content);
		new_content = ft_lstnew(content_tmp);
		if (!new_content)
		{
			ft_lstclear(&new_lst, del);
			free(content_tmp);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_content);
		lst = lst->next;
	}
	return (new_lst);
}
