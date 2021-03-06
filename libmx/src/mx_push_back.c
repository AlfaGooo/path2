#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *p = mx_create_node(data);

    if (p == NULL || list == NULL)
        return;
    p -> data = data;
    p -> next = NULL;
   if (*list == NULL)
        *list = p;
    else {
        t_list *bi = *list;
        
        while (bi->next != NULL)
            bi = bi->next;
        bi->next = p;
    }
}

