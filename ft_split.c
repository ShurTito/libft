/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:47:41 by antferna          #+#    #+#             */
/*   Updated: 2023/04/26 13:54:48 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_splits(const char *s, char c)
{
	int		i;
	size_t	count;
	int		aux;

	i = 0;
	count = 0;
	aux = 0;
	while (s[i])
	{
		if (aux == 0 && s[i] != c)
		{
			aux = 1;
			count++;
		}
		else if (s[i] == c)
			aux = 0;
		i++;
	}
	return (count);
}

static int	ft_free(char **splits, size_t j)
{
	int	fail;

	fail = 0;
	if (!splits[j])
	{
		fail = 1;
		j = 0;
		while (splits[j])
		{
			free(splits[j]);
			j++;
		}
		free(splits);
	}
	return (fail);
}

char	**ft_split(char const *s, char c)
{
	size_t	i[2];
	int		start;
	char	**splits;

	splits = (char **)malloc((count_splits(s, c) + 1) * sizeof(char *));
	if (s == NULL || splits == NULL)
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	start = -1;
	while (i[0] <= ft_strlen(s))
	{
		if (s[i[0]] != c && start < 0)
			start = i[0];
		else if ((s[i[0]] == c || i[0] == ft_strlen(s)) && start >= 0)
		{
			splits[i[1]] = ft_substr(s, start, i[0] - start);
			if (ft_free(splits, i[1]++) == 1)
				return (NULL);
			start = -1;
		}
		i[0]++;
	}
	splits[i[1]] = 0;
	return (splits);
}
