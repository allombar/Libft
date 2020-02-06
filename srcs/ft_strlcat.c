/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allombar <allombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 23:46:10 by allombar          #+#    #+#             */
/*   Updated: 2020/02/06 17:06:20 by allombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size)
	{
		dst_len = ft_strlen(dst);
		if (size > dst_len)
			src_len = src_len + dst_len;
		else
			src_len = src_len + size;
		while (dst_len + 1 < size && src[i])
			dst[dst_len++] = src[i++];
		dst[dst_len] = 0;
	}
	return (src_len);
}
