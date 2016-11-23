/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:14:32 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 00:19:09 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		index2;
	int		index3;
	char	*dest;
	int		len;

	index = ft_strlen(s1) + 1;
	index2 = 0;
	index3 = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * len + 1);
	while (index2 < len)
	{
		while (index2 < index)
		{
			dest[index2] = s1[index2];
			index2++;
		}
		dest[index2] = s2[index3];
		index2++;
		index3++;
	}
	dest[index2] = '\0';
	return (dest);
}
