/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:55:36 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:55:36 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(size);
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, size);
	ft_strlcat(s3, s2, size);
	return (s3);
}
