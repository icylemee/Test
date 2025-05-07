#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_inset(char c, char const *set) //verifie si une carac est dans le set
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

static int	ft_strlen_start(char const *s) //longueur totale de la chaine de depart
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_strlentrim(char const *s, char const *set) //retourne la longueur de la chaine trimée
{
	int	count;
	int	fin;

	count = 0;
	fin = ft_strlen_start(s) - 1;
	while (ft_inset(s[count],set))
		count++;
	while (ft_inset(s[fin], set))
	{
		fin --;
		count++;
	}
	return (ft_strlen_start(s) - count);
}

static int	ft_countend(char const *s, char const *set) //size chaine sans le trim de fin
{
	int	count;
	int	fin;

	count = 0;
	fin = ft_strlen_start(s) - 1;
	while (ft_inset(s[fin], set))
	{
		fin --;
		count++;
	}
	return (ft_strlen_start(s) - count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	int		i;
	int		j;
	int		countend;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = 0;
	countend = ft_countend(s1, set);
	while (ft_inset(s1[i], set))
		i ++;
	if (i == ft_strlen_start(s1))
		copy = malloc(1 * sizeof(char));
	else
		copy = malloc(ft_strlentrim(s1, set) * sizeof(char) + 1);
	if (copy == NULL)
		return (copy);
	while (i < countend)
		copy[j ++] = s1[i ++];
	copy[j] = '\0';
	return (copy);
}
/*int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s\n", ft_strtrim(argv[1], argv[2]));
	}
}*/
