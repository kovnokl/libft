/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:08:40 by knickel           #+#    #+#             */
/*   Updated: 2022/10/17 16:44:19 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;
	size_t			counter;

	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (ucs1[counter] > ucs2[counter])
			return (1);
		else if (ucs1[counter] < ucs2[counter])
			return (2);
		counter++;
	}
	return (0);
}
