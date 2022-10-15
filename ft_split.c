/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:27:48 by knickel           #+#    #+#             */
/*   Updated: 2022/10/16 01:01:38 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**splitted_array;
	size_t	substring_amount;
	size_t	counter;

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
	while(counter < substring_amount)
	{
		splitted_array[counter] = malloc
	}
}
