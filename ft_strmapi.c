/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprukpai <aprukpai@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:55:46 by aprukpai          #+#    #+#             */
/*   Updated: 2026/11/21 15:55:46 by aprukpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ans;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ans = malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ans[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
