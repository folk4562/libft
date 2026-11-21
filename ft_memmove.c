/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:55:22 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:55:22 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (dest == src || n == 0)
		return (dest);
	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		if (dest < src)
			d[i] = s[i];
		else
			d[n - 1 - i] = s[n - 1 - i];
		i++;
	}
	return (dest);
}