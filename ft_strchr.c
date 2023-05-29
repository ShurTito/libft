/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:09:59 by antferna          #+#    #+#             */
/*   Updated: 2023/04/24 15:36:03 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	aux;

	aux = c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == aux)
			return (str + i);
		i++;
	}
	if (aux == '\0')
		return (str + i);
	return (0);
}
