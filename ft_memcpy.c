/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:44:07 by knickel           #+#    #+#             */
/*   Updated: 2022/10/14 23:59:47 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		cdest[counter] = csrc[counter];
		counter++;
	}
	return (dest);
}
