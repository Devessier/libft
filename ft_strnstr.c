/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:38:09 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/08 15:56:46 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp;

	if (!*needle)
		return ((char *)haystack);
	tmp = (char *)needle;
	while (*haystack && *tmp && len--)
		if (*haystack++ != *tmp++)
		{
			if (needle != tmp - 1)
				haystack = haystack - (tmp - needle - 1);
			tmp = (char *)needle;
		}
	return (*tmp ? NULL : (char *)(haystack - (tmp - needle)));
}
