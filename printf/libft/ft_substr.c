/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:40:06 by mlemee            #+#    #+#             */
/*   Updated: 2025/04/28 19:29:29 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*static int	ft_strlen(const char *s)
{
	int	i; 

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char			*new;
	size_t			i;
	size_t			lt;

	i = 0;
	lt = ft_strlen(&s[start]);
	if (len >= lt)
		new = malloc(lt * sizeof(char) + 1);
	if (len < lt)
		new = malloc(len * sizeof(char) + 1);
	if (new == NULL)
		return (new);
	while (i < len && s[start])
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	}
}