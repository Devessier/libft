/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:29:17 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/14 11:30:28 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	if (!(*s1 && *s2))
		return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
	while (n-- && *(unsigned char *)s1++ == *(unsigned char *)s2++)
		if (!-1[s1] && !-1[s2])
			return (0);
	return ((unsigned char)s1[-1] - (unsigned char)s2[-1]);
}
