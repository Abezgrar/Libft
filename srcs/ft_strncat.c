/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:44:17 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/18 12:16:06 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	index[4];
	char			*dest;

	index[3] = ft_strlen(s1);
	index[2] = ft_strlen(s1) + ft_strlen(s2) - (unsigned int)n;
	index[1] = 0;
	index[0] = 0;
	dest = NULL;
	dest = malloc(sizeof(char) * (index[0] + 1));
	if (dest == NULL)
		return (NULL);
	while (index[1] < index[2])
	{
		while (index[1] < index[3])
		{
			dest[index[1]] = s1[index[1]];
			index[1]++;
		}
		dest[index[1]] = s2[index[0]];
		index[0]++;
		index[1]++;
	}
	dest[index[1]] = '\0';
	s1 = dest;
	return (s1);
}
