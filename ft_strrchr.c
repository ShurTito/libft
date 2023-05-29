/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:19:00 by antferna          #+#    #+#             */
/*   Updated: 2023/04/24 15:35:58 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*str2;
	int		i;
	char	aux;

	aux = c;
	str = (char *)s;
	str2 = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == aux)
			str2 = str + i;
		i++;
	}
	if (aux == '\0')
		return (str + i);
	return (str2);
}
