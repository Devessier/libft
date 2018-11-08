/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:31:18 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/08 16:42:03 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dst;
	while (n--)
	{
		*tmp++ = *(unsigned char *)src++;
		if (*tmp == (unsigned char)c)
			return (tmp);
	}
	return (NULL);
}
