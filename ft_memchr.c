/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:43:43 by gtroiano          #+#    #+#             */
/*   Updated: 2023/07/24 17:24:08 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t numbytes)
{
	size_t	i;

	i = 0;
	while (i < numbytes)
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
			return ((void *)((unsigned char *)str + i));
		i++;
	}
	return (NULL);
}
