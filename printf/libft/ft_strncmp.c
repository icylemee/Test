#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (0);
}

/*int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("ma fonction : %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("originale : %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	}
}*/