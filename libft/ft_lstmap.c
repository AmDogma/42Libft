#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new;
	t_list	*temp;
	void	*newcon;

	temp = NULL;
	newcon = NULL;
	if (lst)
		temp = ft_lstnew(f(lst->content));
	new = &temp;
	while (lst->next)
	{
		lst = lst->next;
		newcon = f(lst->content);
		temp->next = ft_lstnew(newcon);
		if (temp->next == NULL)
		{
			ft_lstclear(new, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return(*new);
}
