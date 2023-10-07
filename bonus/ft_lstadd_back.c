#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;

    if(!new)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    tmp = ft_lstlast(*lst);
    tmp->next = new;
}