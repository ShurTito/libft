/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:37:34 by antferna          #+#    #+#             */
/*   Updated: 2023/04/21 14:57:00 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		str = ft_strdup("");
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
		str = (char *)malloc(len + 1);
		if (str == NULL)
			return (NULL);
		while (len > 0 && s[start])
		{
			str[i] = s[start];
			len--;
			i++;
			start++;
		}
		str[i] = '\0';
	}
	return (str);
}
