/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:27:48 by knickel           #+#    #+#             */
/*   Updated: 2022/10/16 05:52:47 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**splitted_array;
	char	*substr;
	size_t	substring_amount;
	size_t	substring_size;
	size_t	counter;

	substr = s;
	substring_amount = 0;
	counter = 0;
	while (s[counter])
	{
		if (s[counter] == c)
			substring_amount++;
		counter++;
	}
	splitted_array = (char **)malloc(sizeof(char *) * substring_amount);
	counter = 0;
	while (counter < substring_amount)
	{
		substring_size = ft_strchr(substr, (int)c) - substr;
		splitted_array[counter] = ft_substr(substr, 0, substring_size - 1);
		substr = ft_strchr(substr, (int)c);
	}
	return (splitted_array);
}
