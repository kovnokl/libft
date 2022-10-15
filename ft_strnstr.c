/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:48:05 by knickel           #+#    #+#             */
/*   Updated: 2022/10/15 16:35:58 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	counter;

	needle_size = sizeof(needle);
	if (!needle_size)
		return (haystack);
	counter = 0;
	while (counter <= len - needle_size)
	{
		if (!ft_strncmp(&haystack[counter], needle, needle_size))
			return (&haystack[counter]);
	}
	return (0);
}
