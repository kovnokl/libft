/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:13:14 by knickel​​​​       #+#    #+#             */
/*   Updated: 2022/12/04 19:16:44 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_substrs(const char *s, char c);
static void		iterate_subs(char **subs, size_t sub_ct, const char *s, char c);
static char		**empty_list(void);
static void		delete_list(char **subs, size_t input_cnt);

char	**ft_split(char const *s, char c)
{
	char	**subs;
	size_t	sub_ct;

	if (s == NULL)
		return (empty_list());
	sub_ct = count_substrs(s, c);
	subs = (char **)malloc(sizeof(char *) * (sub_ct + 1));
	if (subs == NULL)
		return (NULL);
	subs[sub_ct] = NULL;
	if (sub_ct > 0)
		iterate_subs(subs, sub_ct, s, c);
	return (subs);
}

static size_t	count_substrs(const char *s, char c)
{
	size_t	sub_amount;
	size_t	str_len;
	size_t	counter;

	str_len = ft_strlen(s);
	sub_amount = 0;
	counter = 0;
	if (str_len != 0 && s[0] && s[0] != c)
		sub_amount++;
	while (counter + 1 < str_len)
	{
		if (s[counter] == c && s[counter + 1] != c)
			sub_amount++;
		counter++;
	}
	return (sub_amount);
}

static void	iterate_subs(char **subs, size_t sub_ct, const char *s, char c)
{
	size_t	counter;
	size_t	str_pos;
	size_t	str_len;

	counter = 0;
	str_pos = 0;
	while (s[str_pos] == c)
		str_pos++;
	while (counter < sub_ct)
	{
		str_len = 0;
		while (s[str_pos + str_len] != c && s[str_pos + str_len] != 0)
			str_len++;
		subs[counter] = ft_substr(s, str_pos, str_len);
		if (subs[counter] == NULL)
		{
			delete_list(subs, counter);
			break ;
		}
		str_pos += str_len + 1;
		while (counter + 1 < sub_ct && s[str_pos] == c)
			str_pos++;
		counter++;
	}
}

static char	**empty_list(void)
{
	char	**empty_list;

	empty_list = (char **)malloc(sizeof(char *));
	empty_list[0] = NULL;
	return (empty_list);
}

static void	delete_list(char **subs, size_t input_cnt)
{
	size_t	counter;

	counter = 0;
	while (counter < input_cnt)
	{
		free(subs[counter]);
		counter++;
	}
	free(subs);
	subs = NULL;
}
