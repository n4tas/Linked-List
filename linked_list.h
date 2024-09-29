// header file is included only once during compilation.
#pragma once
#include <stdio.h>
#include <stdlib.h>
/** 
 * Node structure, indicates a single node of a linked list.
 * ``struct Node *next`` indicates the next in line node of the linked list.
 * ``void *data`` represents node's data.
*/
typedef struct Node {
    void *data;
    struct Node *next;
} Node;
/**
 * Allocates memory for a new node.
 * @param *data node's data.
 */
Node *create_node(void *data);
/**
 * Adds the node.
 * @param **head represents linked list.
 * @param *node represents new node.
 */

void add_to_list(Node **head, Node *node);
/**
 * Inserts the node. If there are no elements in the linked list - appends at the beginning.
 * @param **head represents linked list.
 * @param *node represents new node.
 */
void insert_to_list(Node **head, Node *node, __uint16_t pos);
/**
 * Prints the elements.
 * @param *head represents linked list.
 */
void print_list(Node **head);
/**
 * Frees the elements.
 * @param *head represents linked list.
 */
void delete_list(Node **head);
/**
 * Frees a specific element.
 * @param **head represents linked list.
 * @param pos represents position.
 */
void delete_node(Node **head, __uint16_t pos);
/**
 * Returns node.
 * @param **head represents linked list.
 * @param pos position
 */
void *find_node(Node **head, __uint16_t pos);
/**
 * Calculates how many nodes are in the linked list.
 * @param **head represents linked list
 */
__uint16_t node_count(Node *head);
