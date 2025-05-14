
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*found; 

	i = 0;
	found = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			found = (char *)&s[i];
			return found;
		}
		i ++;
	}
	return (found);
}

int main(int argc, char *argv[])
{
	
	/*char *test = NULL;
	const char *src = "Salut";
	int c = 'l';

	printf("%s\n", ft_strchr(src, c));*/
	
	if (argc == 3)
	{
		char *test = ft_strchr(argv[1], atoi(argv[2]));
		if (test == NULL)
		{
			printf("Occurence non trouvée\n");
			return 0;
		}
		printf("Occurence trouvée : %s\n", test); 
		return (0);
	}
}