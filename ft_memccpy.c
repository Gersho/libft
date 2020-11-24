/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:40:29 by kzennoun          #+#    #+#             */
/*   Updated: 2020/11/24 16:48:53 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*casted_dst;
	char			*casted_src;
	size_t			i;

	casted_dst = (char *)dst;
	casted_src = (char *)src;
	i = 0;
	while (i < n)
	{
		casted_dst[i] = casted_src[i];
		if (casted_src[i] == c)
			return (casted_dst + i + 1);
		i++;
	}
	return (NULL);
}
