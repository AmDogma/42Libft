#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*toclear;

	temp = *lst;
	toclear = temp;
	while (temp)
	{
		temp = temp->next;
		del(toclear->content);
		free(toclear);
		toclear = temp;
	}
	*lst = ((void *)0);
}
