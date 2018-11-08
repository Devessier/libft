/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:29:17 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/08 13:03:03 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!(*s1 && *s2))
		return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
	while (*(unsigned char *)s1++ == *(unsigned char *)s2++ && n--)
		if (!*(s1 - 1) && !*(s2 - 1))
			return (0);
	return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
}
