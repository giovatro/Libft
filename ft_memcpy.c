/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:39:33 by gtroiano          #+#    #+#             */
/*   Updated: 2023/07/18 20:32:13 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t numbytes)
{
	size_t	i;
	char	*ptrsrc;
	char	*ptrdest;

	i = 0;
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	if (!dest && !src)
		return (dest);
	while (i < numbytes)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
