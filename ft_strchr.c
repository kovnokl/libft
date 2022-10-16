/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:14:05 by knickel           #+#    #+#             */
/*   Updated: 2022/10/16 05:29:20 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	char	cc;
	size_t	counter;

	counter = 0;
	cc = (char)c;
	while (s[counter])
	{
		if (s[counter] == cc)
			return ((char *)s);
		s++;
	}
	if (!cc)
		return ((char *)s);
	return (0);
}
