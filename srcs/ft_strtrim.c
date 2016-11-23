/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 06:33:22 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/21 00:19:12 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strtrim(char const *s)
{
	char	*dest;
	int		start;
	int		end;
	int		i;

	end = ft_strlen(s) - 1;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	start = i;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	dest = malloc(sizeof(char) * (end - start) + 2);
	dest = ft_strncpy(dest, &s[start], (end - start + 1));
	return (dest);
}
