#include "libft.h"
#include <stdio.h>

void display_list(t_list *lst)
{
    while (lst)
    {
        printf("%d\n", *(int *)lst->content);
        lst = lst->next;
    }
}

void square(void *content)
{
    int *n = (int *)content;
    *n *= *n;
}
void *duplicate(void *content)
{
    int *n = (int *)content;
    int *dup = malloc(sizeof(int));
    *dup = *n * 10;
    return dup;
}

int main()
{
    t_list *list = NULL; // Initialize an empty list

    // Test ft_lstnew
    int *data = malloc(sizeof(int));
    *data = 42;
    t_list *new_node = ft_lstnew(data);

    
    // Test ft_lstadd_front
    ft_lstadd_front(&list, new_node);
    printf("List after adding front:\n");
    display_list(list);

    // Test ft_lstsize
    printf("Size of the list: %d\n", ft_lstsize(list));

    // Test ft_lstlast
    t_list *last = ft_lstlast(list);
    printf("Last element of the list: %d\n", *(int *)last->content);

    // Test ft_lstadd_back
    int *data2 = malloc(sizeof(int));
    *data2 = 99;
    t_list *new_node2 = ft_lstnew(data2);
    ft_lstadd_back(&list, new_node2);
    printf("List after adding back:\n");
    display_list(list);

    // Test ft_lstdelone
    t_list *node_to_delete = list; // Store the node to delete
    list = list->next; // Update the list pointer before calling ft_lstdelone
    ft_lstdelone(node_to_delete, free);
    printf("List after deleting one element:\n");
    display_list(list);


    // Test ft_lstclear
    ft_lstclear(&list, free);
    printf("List after clearing:\n");
    display_list(list);

    // Test ft_lstiter
    int i;
    for (i = 0; i < 5; i++)
    {
        int *data = malloc(sizeof(int));
        *data = i;
        t_list *new_node = ft_lstnew(data);
        ft_lstadd_back(&list, new_node);
    }
    printf("List before applying ft_lstiter:\n");
    display_list(list);

    ft_lstiter(list, square);
    printf("List after applying ft_lstiter (squared):\n");
    display_list(list);

    // Test ft_lstmap

    t_list *new_list = ft_lstmap(list, duplicate, free);
    printf("New list created using ft_lstmap:\n");
    display_list(new_list);

    // Clean up memory
    ft_lstclear(&list, free);
    ft_lstclear(&new_list, free);

    return 0;
}