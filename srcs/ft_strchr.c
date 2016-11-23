/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 04:06:02 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 08:18:20 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	occ;

	i = 0;
	occ = (char)c;
	while (s[i])
	{
		if (s[i] == occ)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
