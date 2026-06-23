/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-v <csilva-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 09:44:28 by csilva-v          #+#    #+#             */
/*   Updated: 2026/05/26 15:08:10 by csilva-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;

	if (size != 0 && nmemb > (size_t) -1 / size)
	{
		return (NULL);
	}
	dst = malloc(nmemb * size);
	if (!(dst))
	{
		return (NULL);
	}
	ft_bzero(dst, nmemb * size);
	return (dst);
}
