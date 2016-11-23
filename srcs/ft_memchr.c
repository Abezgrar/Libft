/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:33:37 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 09:59:15 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memchr(const void *s, int c, size_t n)
{
	const char		*s2;
	unsigned char	c2;
	int				i;

	i = (int)n;
	s2 = (const char *)s;
	c2 = (unsigned char)c;
	while (i > 0)
	{
		if (*s2 == c2)
			return ((void *)&s[i]);
		s2++;
		i--;
	}
	return (NULL);
}
