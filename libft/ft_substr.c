/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:40:06 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/06 16:54:22 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			i;
	size_t			slen;

	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
	{
		new = malloc(1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	if (len >= slen)
		len = slen - start;
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	while (i < len && s[start])
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}

/*int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	}
}*/