/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:13:32 by antferna          #+#    #+#             */
/*   Updated: 2023/04/19 17:28:14 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*((char *)s) = 0;
		s++;
		n--;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int main()
{

	char str[10] = "hola";
	printf("%s",str);
	bzero(str, 2);
	printf("%s",str);
	return 0;
}
*/