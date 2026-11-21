/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:54:49 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:54:49 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	byte;

	if (num && size > (size_t)-1 / num)
		return (NULL);
	byte = num * size;
	ptr = malloc(byte);
	if (ptr != NULL)
		ft_memset(ptr, 0, byte);
	return (ptr);
}
