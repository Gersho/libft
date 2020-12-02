/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:02:12 by kzennoun          #+#    #+#             */
/*   Updated: 2020/12/02 15:40:10 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get_sep_count(char const *s, char c)
{
	int		i;
	int		sep_count;
	int		len_s;

	len_s = ft_strlen(s);
	sep_count = 0;
	i = 0;
	while (s[i] && i < len_s - 1)
	{
		if (s[i] == c && s[i + 1] != c)
			sep_count++;
		i++;
	}
	return (sep_count);
}

int		ft_get_split_size(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_free_all_2d(char **ptr, int j)
{
	while (j >= 0)
	{
		free(ptr[j]);
		j--;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		split_size;
	char	**ptr;

	if (!s)
		return (NULL);
	if (!(ptr = malloc((ft_get_sep_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			split_size = ft_get_split_size((char *)s + i, c);
			ptr[j] = ft_substr(s, i, split_size);
			i += split_size;
			j++;
		}
	}
	ptr[j] = NULL;
	return (ptr);
}
