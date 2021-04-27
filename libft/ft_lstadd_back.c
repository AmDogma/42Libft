#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
	if (!*lst)
		*lst = new;
	if (lst && temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (temp && new)
			temp->next = new;
}
