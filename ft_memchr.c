/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:24:46 by antferna          #+#    #+#             */
/*   Updated: 2023/04/20 15:20:24 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	cp;

	p = (unsigned char *)s;
	cp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == cp)
			return (&p[i]);
		i++;
	}
	return (0);
}
