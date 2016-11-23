/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:25:57 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/23 03:15:00 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = NULL;
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	lst = malloc(sizeof(t_list) * content_size);
	if (lst == NULL)
		return (NULL);
	ft_memcpy(lst->content, content, content_size);
	lst->next = NULL;
	return (lst);
}
