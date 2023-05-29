/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:36:43 by antferna          #+#    #+#             */
/*   Updated: 2023/04/20 15:33:04 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;

	j = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (dstsize < 1)
		return (lensrc + dstsize);
	i = lendst;
	while (src[j] && (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < lendst)
		return (lensrc + dstsize);
	else
		return (lendst + lensrc);
}
