/* #include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new;
	t_list	*temp;

	temp = NULL;
	new = NULL;
	if (lst && lst->content)
	{
		temp = (ft_lstnew(f(lst->content)));
		new = &temp;
	}
	while (lst && *new && lst->next && lst->next->content)
	{
		lst = lst->next;
		temp->next = ft_lstnew(f(lst->content));
		if (temp->next == NULL)
		{
			ft_lstclear(new, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return(*new);
}
*/
