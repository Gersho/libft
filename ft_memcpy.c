/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:40:36 by kzennoun          #+#    #+#             */
/*   Updated: 2020/11/24 18:47:31 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*casted_dst;
	char	*casted_src;
	unsigned int i;
	unsigned int j;

	casted_dst = (char *)dst;
	casted_src = (char *)src;
	j = 0;
	while (casted_src[j])
	{
		j++;
	}
	if (n == 0)
		return (casted_src);
	i = 0;
	while (i < n && casted_src[i])
	{
		casted_dst[i] = casted_src[i];
		i++;
	}
	return (casted_dst);
}
