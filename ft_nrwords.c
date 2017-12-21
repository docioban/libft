/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:59:15 by docioban          #+#    #+#             */
/*   Updated: 2017/12/12 15:31:57 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nrwords(char const *s, char c)
{
	int i;
	int nr;

	i = 0;
	nr = 0;
	while (s[i] != '\0')
	{
		i++;
		if ((s[i] == c || s[i] == '\0') && s[i - 1] != c)
			nr++;
	}
	return (nr);
}