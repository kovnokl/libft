/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:50:04 by knickel           #+#    #+#             */
/*   Updated: 2022/10/17 22:05:55 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	str_size;
	char	*new_str;
	size_t	counter;

	str_size = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * str_size);
	if (!new_str)
		return (0);
	counter = 0;
	while (counter < str_size - 1)
	{
		new_str[counter] = f(counter, s[counter]);
		counter++;
	}
	return (new_str);
}
