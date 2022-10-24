/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:48:05 by knickel           #+#    #+#             */
/*   Updated: 2022/10/19 04:32:04 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	counter;

	if (!len)
		return (NULL);
	needle_size = ft_strlen(needle);
	if (!needle_size)
		return ((char *)haystack);
	counter = 0;
	while (counter <= len - needle_size)
	{
		if (!ft_strncmp(&haystack[counter], needle, needle_size))
			return ((char *)&haystack[counter]);
		counter++;
	}
	return (NULL);
}
