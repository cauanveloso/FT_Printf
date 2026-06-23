/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-v <csilva-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:25:29 by csilva-v          #+#    #+#             */
/*   Updated: 2026/05/21 15:52:11 by csilva-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*scr;
	size_t				i;

	scr = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (scr[i] == (unsigned char)c)
		{
			return ((void *)&scr[i]);
		}
		i++;
	}
	return (NULL);
}
