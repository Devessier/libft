/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <bdevessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 10:45:42 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/11 11:07:20 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(char const *s, char c)
{
	int	wc;
	char	state;

	wc = 0;
	state = 0
	while (*s)
	{
		if (*s == c)
			state = 0;
		else if (state == 0)
		{
			state ^= 1;
			wc++;
		}
		s++;
	}
	return (wc);
}

char		**ft_strsplit(char const *s, char c)
{
	int	len;
	char	**tab;

	len = nb_words(s);
	tab = malloc(sizeof(char *) * (len + 1));
	tab[len] = 0;
	if ()
}
