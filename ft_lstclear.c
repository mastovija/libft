#include "libft.h"
/**
 * ft_lstclear function is used to clear a linked list by deleting all nodes and freeing the associated memory.
 * It iterates through the list, deletes each node using ft_lstdelone, and updates the head pointer to NULL to indicate an empty list.
*/

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (lst == NULL)
        return;

    t_list *current = *lst;
    t_list *next;

    while (current != NULL)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }

    *lst = NULL;
}

void del_content(void *content)
{
    free(content);
}

int main()
{
    // Create a linked list with three nodes
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Connect the nodes
    node1->next = node2;
    node2->next = node3;

    // Initialize the head pointer
    t_list *head = node1;

    // Clear the list using ft_lstclear
    ft_lstclear(&head, del_content);

    // Print the content of each node (should be empty)
    t_list *current = head;
    while (current != NULL)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}