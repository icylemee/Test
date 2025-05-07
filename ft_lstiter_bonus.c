#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	void	*content;
	while (lst)
	{
		content = lst -> content;
		f(content);
		lst = lst -> next;
	}
}