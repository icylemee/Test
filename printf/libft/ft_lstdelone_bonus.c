#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	void	*sup;

	sup = lst -> content;
	del(sup);
	free(lst);
}

