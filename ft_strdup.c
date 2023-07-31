/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:32:14 by gtroiano          #+#    #+#             */
/*   Updated: 2023/07/31 11:13:51 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		dest_size;

	dest_size = ft_strlen(s) + 1;
	dup = (char *)malloc(sizeof(char) * dest_size);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, dest_size);
	return (dup);
}
