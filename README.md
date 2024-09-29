# Linked List Library

This repository contains a simple implementation of a singly linked list in C. The library provides functions to create, manipulate, and free linked lists.

## Features

- Dynamic memory allocation for nodes.
- Generic data storage using `void *`.
- Basic linked list operations including insertion, deletion, and traversal.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Function Overview](#function-overview)
- [Contributing](#contributing)
- [License](#license)

## Installation

Clone the repository:

```bash
git clone https://github.com/yourusername/linked-list.git
```

Include the `linked_list.h` header file in your project:

```c
#include "linked_list.h"
```

Compile your code with the appropriate flags for your compiler. For example:

```bash
gcc -o your_program your_program.c linked_list.c
```

## Usage

1. Create nodes by passing data to the `create_node()` function.
2. Add nodes to the linked list using the `add_to_list()` or `insert_to_list()` functions.
3. Traverse or manipulate the list with `print_list()`, `delete_node()`, `find_node()`, etc.
4. Free up memory once you're done using `delete_list()` or `delete_node()`.

Example usage:

```c
#include "linked_list.h"

int main() {
    Node *head = NULL;
    
    // Create some nodes
    int data1 = 10, data2 = 20, data3 = 30;
    Node *node1 = create_node(&data1);
    Node *node2 = create_node(&data2);
    Node *node3 = create_node(&data3);
    
    // Add nodes to the list
    add_to_list(&head, node1);
    add_to_list(&head, node2);
    insert_to_list(&head, node3, 1);  // Insert node3 at position 1
    
    // Print the list
    print_list(&head);
    
    // Clean up memory
    delete_list(head);
    
    return 0;
}
```

## Function Overview

### `Node *create_node(void *data)`
Creates a new node and allocates memory for it.

- **Parameters**:  
  - `data`: Pointer to the data you want to store in the node.
  
- **Returns**:  
  Pointer to the newly created node.

### `void add_to_list(Node **head, Node *node)`
Adds a node to the end of the linked list.

- **Parameters**:  
  - `head`: Pointer to the pointer of the linked list's head.  
  - `node`: Pointer to the new node to be added.

### `void insert_to_list(Node **head, Node *node, __uint16_t pos)`
Inserts a node at the specified position in the linked list.

- **Parameters**:  
  - `head`: Pointer to the pointer of the linked list's head.  
  - `node`: Pointer to the new node to be inserted.  
  - `pos`: Position (0-based) where the node should be inserted.

### `void print_list(Node **head)`
Prints all the elements of the linked list.

- **Parameters**:  
  - `head`: Pointer to the pointer of the linked list's head.

### `void delete_list(Node *head)`
Frees all nodes in the linked list.

- **Parameters**:  
  - `head`: Pointer to the head of the linked list.

### `void delete_node(Node **head, __uint16_t pos)`
Deletes a node from the linked list at the specified position.

- **Parameters**:  
  - `head`: Pointer to the pointer of the linked list's head.  
  - `pos`: Position (0-based) of the node to be deleted.

### `void *find_node(Node **head, __uint16_t pos)`
Finds and returns the data at the specified position in the linked list.

- **Parameters**:  
  - `head`: Pointer to the pointer of the linked list's head.  
  - `pos`: Position (0-based) of the node.

- **Returns**:  
  Pointer to the data stored in the node at the given position.

### `__uint16_t node_count(Node *head)`
Calculates and returns the number of nodes in the linked list.

- **Parameters**:  
  - `head`: Pointer to the head of the linked list.

- **Returns**:  
  The number of nodes in the linked list.

## Contributing

If you'd like to contribute to this project, feel free to fork the repository and submit a pull request. All contributions, from bug fixes to feature enhancements, are welcome!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
