/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezgrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 09:25:32 by abezgrar          #+#    #+#             */
/*   Updated: 2017/01/31 11:17:19 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlen(const char *str)
{
	const char	*temp;

	temp = str;
	while (*str)
		str++;
	return (str - temp);
}
