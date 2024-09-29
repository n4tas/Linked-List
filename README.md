# Linked List Library

This repository contains a simple implementation of a singly linked list in C. The library provides functions to create, manipulate, and free linked lists.

## Features

- Dynamic memory allocation for nodes.
- Generic data storage using `void *`.
- Basic linked list operations including insertion, deletion, and traversal.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Installation

Clone the repository:

```bash
git clone https://github.com/n4tas/linked-list.git
```

Build, install and include the library:

``make``

``sudo make install``
```c
#include <linked_list.h>
```

Compile your code with the appropriate flags for your compiler. For example:

```bash
gcc -o Program main.c -llinked_list
```

## Usage

1. Create nodes by passing data to the `create_node()` function.
2. Add nodes to the linked list using the `add_to_list()` or `insert_to_list()` functions.
3. Traverse or manipulate the list with `print_list()`, `delete_node()`, `find_node()`, etc.
4. Free up memory once you're done using `delete_list()` or `delete_node()`.

Example usage:

```c
#include <linked_list.h>

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
## Contributing

If you'd like to contribute to this project, feel free to fork the repository and submit a pull request. All contributions, from bug fixes to feature enhancements, are welcome!
