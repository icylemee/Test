/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:44:50 by mlemee            #+#    #+#             */
/*   Updated: 2025/04/30 18:56:19 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_cat(const char *s)
{
	size_t	i; 

	i = 0;
	while (s[i])
		i++;
	return (i);
}
size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t	i;
	size_t	t;
    int 	j; 

    i = 0;
	j = 0; 
    while (dest[i])
        i++;
	t = i;
    while (i < (n - 1) && src[j])
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	if(i < n)
		dest[i] = '\0';
	return (t + ft_strlen_cat(src));
}