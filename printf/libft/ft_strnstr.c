/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:17:16 by mlemee            #+#    #+#             */
/*   Updated: 2025/04/28 15:03:58 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while ((big[i + j] == little[j]) && ((i + j) < len))
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		j = 0;
		i ++;
	}
	return (NULL);
}

/*int main (int argc, char *argv[])
{
	if (argc == 4)
	{
		if (ft_strnstr(argv[1], argv[2], atoi(argv[3])) == NULL)
		{
			printf("Erreur");
			return 0;
		}
		printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	}
}*/