/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:29:17 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/08 13:05:50 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (!(*s1 && *s2))
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	while (*(unsigned char *)s1++ == *(unsigned char *)s2++)
		if (!*(s1 - 1) && !*(s2 - 1))
			return (0);
	return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
}
