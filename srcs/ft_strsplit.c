/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 06:29:29 by abezgrar          #+#    #+#             */
/*   Updated: 2016/11/22 20:58:59 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		**ft_loul(int j)
{
	char		**tmp;

	tmp = malloc(sizeof(char *) * j + 1);
	tmp[j] = NULL;
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}

static char		**ft_createtab(char const *s, char c, int i, int j)
{
	int			k;
	int			cp;
	int			cpj;
	char		**tmp;

	cpj = j;
	k = 0;
	tmp = ft_loul(j);
	while (cpj > 0)
	{
		j = 0;
		while (s[i] == c)
			i++;
		cp = i;
		while (s[i] != c & s[i] != '\0')
		{
			i++;
			j++;
		}
		tmp[k] = malloc(sizeof(char) * j + 1);
		tmp[k] = ft_strncpy(tmp[k], &s[cp], j);
		k++;
		cpj--;
	}
	return (tmp);
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			j;
	char		**tab;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	tab = ft_createtab(s, c, 0, j);
	return (tab);
}
