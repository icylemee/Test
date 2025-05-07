
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*static int	ft_strlen(const char *s)
{
	int	i; 

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*found; 

	i = ft_strlen(s);
	found = NULL;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			found = (char *)&s[i];
			return found;
		}
		i --;
	}
	return (found);
}