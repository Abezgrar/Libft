/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:22:59 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/18 12:19:05 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	index;
	char			*dest;

	i = 0;
	index = 0;
	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[index] = s[start];
		index++;
		start++;
		i++;
	}
	return (dest);
}
