/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:45:52 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:45:52 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		cc;
	const char	*end;

	cc = c;
	end = s;
	while (*end != '\0')
		end++;
	while (end > s)
	{
		if (*end == cc)
			return ((char *)end);
		end--;
	}
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
