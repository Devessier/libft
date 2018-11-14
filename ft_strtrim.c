/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:15:02 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/14 12:23:44 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SPACE(C) ((C) == ' ' || (C) == '\n' || (C) == '\t')

char	*ft_strtrim(char const *s)
{
	size_t	len;

	if (!s)
		return (NULL);
	while (*s && SPACE(*s))
		s++;
	len = ft_strlen(s);
	while (len && SPACE(s[len - 1]))
		len--;
	return (ft_strsub(s, 0, len));
}
