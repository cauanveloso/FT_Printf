/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-v <csilva-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:26:25 by csilva-v          #+#    #+#             */
/*   Updated: 2026/05/26 09:59:44 by csilva-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*scr;
	const unsigned char	*dest;

	scr = (const unsigned char *) s1;
	dest = (const unsigned char *) s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n -1)
	{
		if (scr[i] != dest[i])
		{
			return (scr[i] - dest[i]);
		}
		i++;
	}
	return (scr[i] - dest[i]);
}
