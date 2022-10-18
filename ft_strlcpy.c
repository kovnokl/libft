/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:30:33 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 01:02:56 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	remaining_size;

	remaining_size = dsize;
	while (*src && remaining_size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		remaining_size--;
	}
	if (remaining_size)
		*dst = 0;
	return (sizeof(src));
}
