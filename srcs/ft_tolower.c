/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 18:01:47 by abezgrar          #+#    #+#             */
/*   Updated: 2016/04/03 19:03:18 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	if (((unsigned char)c) >= 'A' && ((unsigned char)c) <= 'Z')
		c = ((unsigned char)c) + 32;
	return (c);
}
