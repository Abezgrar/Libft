/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 05:24:25 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 09:37:18 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*loul;

	i = 0;
	j = 0;
	loul = (char *)big;
	if (little == NULL)
		return ((char *)big);
	while (loul[i])
	{
		while (little[j])
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
