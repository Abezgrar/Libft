/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 05:46:00 by abezgrar          #+#    #+#             */
/*   Updated: 2017/01/31 10:22:43 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	occ;
	char	*loul;

	i = ft_strlen(s);
	occ = (char)c;
	loul = (char *)s;
	while (i >= 0)
	{
		if (loul[i] == occ)
			return (&loul[i]);
		i--;
	}
	return (NULL);
}
