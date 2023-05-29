/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:14:30 by antferna          #+#    #+#             */
/*   Updated: 2023/04/21 15:54:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (len > (i + j) && haystack[i + j] == needle [j])
			{
				j++;
				if (ft_strlen(needle) == j)
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void) {
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Baz";
	char	*ptr;
	size_t len = 12;

	ptr = strnstr(largestring, smallstring, len);
	printf("%s\n", ptr);

	ptr = ft_strnstr(largestring,smallstring, len);
	printf("%s\n", ptr);	
	return (0);
}*/
