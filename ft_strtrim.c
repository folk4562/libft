/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:45:10 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:45:10 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (!s1[start])
		return (ft_substr(s1, start, 0));
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	s2 = ft_substr(s1, start, end - start + 1);
	return (s2);
}
