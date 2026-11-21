/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:55:20 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:55:20 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*sr;
	unsigned char		*dst;

	i = 0;
	sr = src;
	dst = dest;
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}
