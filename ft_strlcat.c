/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:55:38 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:55:38 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = 0;
	while (dstlen < size && dst[dstlen])
		dstlen++;
	if (dstlen >= size)
		return (size + srclen);
	i = 0;
	j = dstlen;
	while (src[i] != '\0' && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (srclen + dstlen);
}
