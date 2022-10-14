/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:43:13 by knickel           #+#    #+#             */
/*   Updated: 2022/10/14 23:43:04 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdest;
	char	*csrc;
	char	*temp;
	int		counter;

	cdest = (char *)dst;
	csrc = (char *)src;
	temp = (char *)malloc(sizeof(char) * len);
	if (!temp)
		return (0);
	counter = 0;
	while (counter < len)
	{
		temp[counter] = csrc[counter];
		counter++;
	}
	counter = 0;
	while (counter < len)
	{
		cdest[counter] = temp[counter];
		counter++;
	}
	return (dst);
}
