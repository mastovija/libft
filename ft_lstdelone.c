#include "libft.h"
/**
 * The ft_lstdelone function is responsible for deleting a single node from a linked list. 
 * It takes care of freeing both the content memory and the node itself. 
 * The del function is used to handle the specific memory deallocation of the content, and it is called only if it is provided and not NULL.
*/
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL)
        return;

    // Call the delete function to free the content memory
    if (del != NULL)
        del(lst->content);

    // Free the memory of the node itself
    free(lst);
}

void del_content(void *content)
{
    free(content);
}

int main()
{
    // Create a node
    t_list *node = malloc(sizeof(t_list));
    node->content = "Example";
    node->next = NULL;

    // Delete the node using ft_lstdelone
    ft_lstdelone(node, del_content);

    // Attempt to access the deleted node (will result in undefined behavior)
    printf("Content: %s\n", (char *)node->content);

    return 0;
}