/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:28:02 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 08:20:56 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		i;
	char	*dest;

	index = ft_strlen(s);
	i = 0;
	dest = malloc(sizeof(char) * index + 1);
	while (i < index)
	{
		dest[i] = f(i, (char)&s[i]);
		i++;
	}
	if (dest == NULL)
		return (NULL);
	return (dest);
}
