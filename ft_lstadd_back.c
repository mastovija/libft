#include "libft.h"
/**
 * The ft_lstadd_back function provides a convenient way to add a new node to the end of a linked list. 
*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return;

    if (*lst != NULL)
    {
        t_list *lastNode = ft_lstlast(*lst);
        lastNode->next = new;
    }
    else
    {
        *lst = new;
    }
}

int main()
{
    /**
     * Create a linked list with three nodes
     * They are set to NULL because these nodes are currently being initialized as individual nodes 
     * and have not been linked together in a list.
    */
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->content = "Node 1";
    node1->next = NULL;

    node2->content = "Node 2";
    node2->next = NULL;

    node3->content = "Node 3";
    node3->next = NULL;

    /**
     * Initialize the head pointer
     * Having a separate head pointer allows for better organization and control over the linked list operations, 
     * making it easier to manage and manipulate the list throughout your program.
    */
    t_list *head = NULL;

    // Add nodes to the list using ft_lstadd_back
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    // Traverse the list and print the content of each node
    t_list *current = head;
    while (current != NULL)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Free the memory allocated for the linked list
    free(node1);
    free(node2);
    free(node3);

    return 0;
}