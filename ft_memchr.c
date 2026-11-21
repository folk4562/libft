/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:55:17 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:55:17 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	const unsigned char	*p;
	unsigned char		tar;
	size_t				i;

	p = (const unsigned char *)ptr;
	tar = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		if (p[i] == tar)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
