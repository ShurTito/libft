/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:19:01 by antferna          #+#    #+#             */
/*   Updated: 2023/04/21 15:54:04 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	front_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		flag;

	i = 0;
	flag = 0;
	while (i < ft_strlen(s1) && flag == 0)
	{
		j = 0;
		flag = 1;
		while (j < ft_strlen(set))
			if (set[j++] == s1[i])
				flag = 0;
		if (flag == 0)
			i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		flag;

	i = front_trim(s1, set);
	k = ft_strlen(s1);
	flag = 0;
	while (k > i && flag == 0)
	{
		j = 0;
		flag = 1;
		while (j < ft_strlen(set))
			if (set[j++] == s1[k - 1])
				flag = 0;
		if (flag == 0)
			k--;
	}
	return (ft_substr(s1, i, k - i));
}
