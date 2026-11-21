/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:46:47 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:46:47 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_count;
	size_t	i;

	n_count = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[n_count] != '\0')
		n_count++;
	while (len >= n_count && *haystack != '\0')
	{
		i = 0;
		while (i < n_count && haystack[i] == needle[i])
			i++;
		if (i == n_count)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}