#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new;
	t_list	*temp;

	temp = ft_lstnew(f(lst->content));
	new = &temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew(f(lst->content));
		if (temp->next == NULL)
			ft_lstclear(new, del);
		temp = temp->next;
	}
	return(*new);
}
