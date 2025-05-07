#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sb1;
	unsigned char	*sb2;
	size_t			i;

	sb1 = (unsigned char *)s1;
	sb2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sb1[i] != sb2[i])
			return (sb1[i] - sb2[i]);
		i++;
	}
	return (0);
}