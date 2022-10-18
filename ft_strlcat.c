/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:13:21 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 01:03:09 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	remaining_size;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(dst);
	remaining_size = dsize;
	while (*dst && remaining_size)
	{
		dst++;
		remaining_size--;
	}
	while (*src && remaining_size > 1)
	{
		*dst = *src;
		src++;
		remaining_size--;
	}
	if (remaining_size)
		*dst = 0;
	return (dst_len + src_len);
}
