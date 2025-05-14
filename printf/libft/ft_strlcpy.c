/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:22:01 by mlemee            #+#    #+#             */
/*   Updated: 2025/04/30 18:56:25 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	ft_strlen(const char *s)
{
	int	i; 

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/
size_t ft_strlcpy (char *dest, const char *src, size_t n)
{
    size_t	i;

    i = 0;
    while (i < (n - 1) && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	if (n > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}