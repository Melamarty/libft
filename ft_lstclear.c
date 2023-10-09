#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (lst == NULL || *lst == NULL || del == NULL)
        return;

    t_list *current = *lst;

    while (current)
    {
        t_list *next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    
    *lst = NULL;
}
