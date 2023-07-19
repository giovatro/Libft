/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:35:26 by gtroiano          #+#    #+#             */
/*   Updated: 2023/07/19 15:05:19 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str_ptr;

	str_ptr = (char *)str;
	while (n > 0)
	{
		str_ptr[n - 1] = c;
		n--;
	}
	return (str);
}
