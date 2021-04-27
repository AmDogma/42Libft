#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = ft_lstnew(f(lst->content));
	temp = new;
	while(lst->next && new)
	{
		temp->next = ft_lstnew(f(lst->next->content));
		lst = lst->next;
		if (temp->next == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return(new);
}
