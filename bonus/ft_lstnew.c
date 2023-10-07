#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *tmp;
    
    tmp = (t_list *)malloc(sizeof(t_list));
    if(tmp == NULL)
        return (NULL);
    tmp->content = content;
    tmp->next = NULL;
    return (tmp);
}
