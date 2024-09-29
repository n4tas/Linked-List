#include "linked_list.h"

Node *create_node(void *data)
{   
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void add_to_list(Node **head, Node *node)
{   
    if (*head == NULL){
        node->next = (*head); 
        *head = node;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}
void insert_to_list(Node **head, Node *node, __uint16_t pos)
{   
    Node *temp = *head;
    __uint16_t i = 0;
    if (*head == NULL){
        node->next = (*head); 
        *head = node;
        temp = NULL;
        return;
    }
    if (node_count(*head) < pos){
        free(node);
        temp = NULL;
        return;
    }
    if (pos == 0){
        node->next = (*head); 
        *head = node;
        temp = NULL;
        return;
    }
    while (temp != NULL){    
        if (i == pos-1){
            node->next = temp->next;
            temp->next = node;
            return;
        }
        temp = temp->next;
        ++i;
    }
}
void delete_list(Node **head)
{   
    Node *temp = *head;
    if (head == NULL){
        return;
    }
    while ((*head) != NULL){
        temp = *head;
        *head = (*head)->next;
        free(temp->data);
        free(temp);
    }
    *head = NULL;
    temp = NULL;
}
void print_list(Node **head)
{   
    Node *temp = *head;
    __uint16_t i = 0;
    if (*head == NULL){
        temp = NULL;
        return;
    }
    while (temp != NULL){
        printf("Node %d data -> %d\n", i, *((int*)temp->data));
        temp = temp->next;
        ++i;
    }
}
void delete_node(Node **head, __uint16_t pos)
{
    if (*head == NULL || node_count(*head) < pos)
        return;
    Node *temp = *head;
    if (pos == 0){
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        temp = NULL;
        return;
    }
    __uint16_t i = 0;
    while (temp != NULL && i != pos-1){
        temp = temp->next;
        ++i;
    }
    Node *temp_forward = temp->next->next;
    free(temp->next);
    free(temp->data);
    temp->next = temp_forward;
}
void *find_node(Node **head, __uint16_t pos)
{   
    Node *temp = *head;
    __uint16_t i = 0;
    if (head == NULL || node_count(*head) < pos){
        delete_list(head);
        temp = NULL;
        return NULL;
    }
    while (temp != NULL){
        if (i == pos)
            break;
        temp = temp->next;
        ++i;
    }
    return temp;
}
__uint16_t node_count(Node *head)
{   
    Node *temp = head;
    __uint16_t count = 0;
    if (head == NULL){
        temp = NULL;
        return 0;
    }
    while (temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;           
}
