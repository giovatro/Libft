/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:29:46 by gtroiano          #+#    #+#             */
/*   Updated: 2023/07/28 19:24:05 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*s;
	int				sign;
	unsigned int	num;

	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	sign = 0;
	num = n;
	if (n < 0)
	{
		sign = 1;
		num *= -1;
	}
	while (len--)
	{
		s[len] = 48 + (num % 10);
		num /= 10;
	}
	if (sign)
		s[0] = 45;
	return (s);
}
