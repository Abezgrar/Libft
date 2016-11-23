/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:50:16 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 09:55:21 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;
	int			i;

	i = (int)len;
	dst2 = (char *)dst;
	src2 = (const char *)src;
	if (dst2 >= src2)
		return (ft_memcpy(dst, src, i));
	else
	{
		while (i >= 0)
		{
			dst2[i] = src2[i];
			i--;
		}
	}
	return (dst);
}
