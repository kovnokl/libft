/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:02:54 by knickel           #+#    #+#             */
/*   Updated: 2022/10/16 04:57:51 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	cc;
	char	*snc;
	size_t	counter;

	snc = s;
	cc = (char) c;
	counter = sizeof(s);
	snc = &s[counter];
	while (counter > 0)
	{
		if (*snc == cc)
			return (snc);
		snc--;
	}
	return (0);
}
