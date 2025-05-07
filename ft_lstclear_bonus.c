#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*sup;
	t_list	*add;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		sup = (*lst) -> content;
		del(sup);
		add = (*lst) -> next;
		free(*lst);
		*lst = add;
	}
}