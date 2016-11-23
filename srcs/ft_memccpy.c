/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 22:15:41 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 10:30:15 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	char			*dest;
	const char		*srcs;
	unsigned char	cc;

	cc = (unsigned char)c;
	dest = (char *)dst;
	srcs = (const char *)src;
	index = 0;
	while (index < n)
	{
		if ((unsigned char)srcs[index] == cc)
		{
			dest[index] = srcs[index];
			return (&dest[index++]);
		}
		dest[index] = srcs[index];
		index++;
	}
	return (NULL);
}
