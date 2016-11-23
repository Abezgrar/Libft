/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:00:37 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 08:20:34 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		index;
	int		i;
	char	*dest;

	index = ft_strlen(s);
	i = 0;
	dest = malloc(sizeof(char) * index + 1);
	while (i < index)
	{
		dest[i] = f((char)&s[i]);
		i++;
	}
	if (dest == NULL)
		return (NULL);
	return (dest);
}
