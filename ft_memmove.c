/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:01:05 by gtroiano          #+#    #+#             */
/*   Updated: 2023/07/18 20:43:53 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	if (!dest && !src)
		return (dest);
	if (src < dest)
		while (n--)
			*((char *)dest + n) = *((char *)src + n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
