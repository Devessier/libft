/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:38:09 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/12 18:06:56 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;

	l = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len >= l)
	{
		if (ft_strncmp(haystack, needle, l) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
