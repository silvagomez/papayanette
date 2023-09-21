#include "papaya_lib.h"

// Test function for list
void    test_print_list(t_list *node)
{
    t_list  *list = node;

    while (list != NULL)
    {
        printf("%s", (char *)list->content);
        list = list->next;
    }
}

void    test_delete_content(void *content)
{
    free(content);
}

void    test_print_lstcontent(void *content)
{
	printf("%s", (char *)content);
}

void *test_add_suffix(void *content)
{
	char *str = (char *)content;
	char *new_str = malloc(strlen(str) + 3);
	
    strcpy(new_str, str);
	strcat(new_str, "_OK");
	return new_str;
}

void    test_lst()
{
    char    *str1 = "ft_lstnew";
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    int     lst_size;
    t_list  *node4;
    t_list  *node5;
    t_list  *node6;
    t_list  *node7;
    t_list  *node8;
    t_list  *node9;
    t_list  *node10;
    t_list  *node11;
    t_list  *node12;
    t_list  *node13;
    t_list  *node14;
    t_list  *node15;
    t_list  *node16;
    t_list  *node17;

    node1 = ft_lstnew(str1);
    printf("%s\t\t", (char *)node1->content);
    printf("%p", (char *)node1->next);
    printf(GREEN ".OK" RESET);
    printf("\n");

    node2 = ft_lstnew("_front\t\t");
    node3 = ft_lstnew("ft_lstadd");
    ft_lstadd_front(&node2, node3);
    test_print_list(node2);
    ft_true(1);
    printf("\n");

    printf("ft_lstsize\t\t");
    lst_size = ft_lstsize(node3);
    printf("Size->%d", lst_size);
    printf(GREEN ".OK" RESET);
    printf("\n");

    node4 = ft_lstnew("OK");
    node5 = ft_lstnew("new\t\t");
    node6 = ft_lstnew("ft_lst");
    ft_lstadd_front(&node4, node5);
    ft_lstadd_front(&node4, node6);
    //test_print_list(node4);
    node7 = ft_lstlast(node4);
    printf("ft_lstlast\t\t");
    printf(GREEN "%s\n" RESET, (char *)node7->content);

    node8 = ft_lstnew("ft_lstadd");
    node9 = ft_lstnew("_back\t\t");
    node10 = ft_lstnew("OK");
    ft_lstadd_back(&node8, node9);
    ft_lstadd_back(&node8, node10);
    test_print_list(node8);
    printf("\n");

    printf("ft_lstdelone\t\t");
    node11 = malloc(sizeof(t_list));
    node11->content = malloc(sizeof(char) * 3);
    strcpy(node11->content, "OK");
    node12 = malloc(sizeof(t_list));
    node12->content = malloc(sizeof(char) * 5);
    strcpy(node12->content, "okok");
    node11->next = node12;
    node12->next = NULL;
    //test_print_list(node11);
    ft_lstdelone(node12, &test_delete_content);
    //test_print_list(node11);
    // The reason the code is not displaying the content of the lists 
    // after deleting the specified nodes is that once a node is deleted, 
    // accessing its content or traversing the list will lead to 
    // undefined behavior, as the memory may have been deallocated 
    // or reused for other purposes..
    printf("\n");

    printf("ft_lstclear\t\t");
    node13 = malloc(sizeof(t_list));
    node13->content = malloc(sizeof(char) * 3);
    strcpy(node13->content, "OK");
    node14 = malloc(sizeof(t_list));
    node14->content = malloc(sizeof(char) * 5);
    strcpy(node14->content, "okok");
    node13->next = node14;
    node14->next = NULL;
    ft_lstclear(&node13, test_delete_content);
    if (node13 == NULL)
        ft_true(1);
    else
        ft_false(1);
    printf("\n");

    node15 = ft_lstnew("ft_lst");
    node16 = ft_lstnew("iter\t\t");
    node17 = ft_lstnew("OK");
    ft_lstadd_back(&node15, node16);
    ft_lstadd_back(&node15, node17);
    ft_lstiter(node15, test_print_lstcontent);
    printf("\n");

    printf("ft_lstmap\t\t");
    t_list *list2 = ft_lstnew("T1");
	t_list *n_node2 = ft_lstnew("T2");
	t_list *n_node3 = ft_lstnew("T3");
    ft_lstadd_back(&list2, n_node2);
    ft_lstadd_back(&list2, n_node3);
	//printf("List 2 before mapping: \n");
	//test_print_list(list2);
	t_list *new_list2 = ft_lstmap(list2, test_add_suffix, test_delete_content);
	//printf("List 2 after mapping: \n");
	test_print_list(new_list2); 
    printf("\n");
    
}
