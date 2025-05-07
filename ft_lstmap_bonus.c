#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last; 
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ref; 
	t_list	*first; 

	first = ft_lstnew(f(lst -> content));
	if (!first)
		return (NULL);
	ref = first;
	lst = lst -> next;
	while (lst)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&ref, del);
			return (NULL);
		}
		ft_lstadd_back(&ref, new);
		lst = lst -> next; 
	}
	return (ref);
}
t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> next = NULL;
	new -> content = content;
	return (new);
}
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