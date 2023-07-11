/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:47:29 by gtroiano          #+#    #+#             */
/*   Updated: 2023/07/11 18:51:58 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_toupper(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
/*
int	main(void)
{
	char lower[] = "giovanni";

	ft_toupper(lower);
	printf("%s", lower);
	return (0);
}
*/
