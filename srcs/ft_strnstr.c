/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 05:39:20 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 09:37:36 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	j;
	char	*loul;

	i = 0;
	j = 0;
	loul = (char *)big;
	if (little == NULL)
		return (loul);
	while (loul[i])
	{
		while (little[j] && j < len)
		{
			if (loul[i] == little[j])
			{
				i++;
				j++;
			}
			else
				i++;
		}
		return (&loul[i]);
	}
	return (NULL);
}
