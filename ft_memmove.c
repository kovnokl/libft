/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:43:13 by knickel           #+#    #+#             */
/*   Updated: 2022/10/14 09:03:45 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, unsigned long n)
{
	char	*cdest;
	char	*csrc;
	char	*temp;
	int		counter;

	cdest = (char *)str1;
	csrc = (char *)str2;
	temp = (char *)malloc(sizeof(char) * n);
	if (!temp)
		return (0);
	counter = 0;
	while (counter < n)
	{
		temp[counter] = csrc[counter];
		counter++;
	}
	counter = 0;
	while (counter < n)
	{
		cdest[counter] = temp[counter];
		counter++;
	}
	return (str1);
}
