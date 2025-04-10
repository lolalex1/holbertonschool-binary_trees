#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: stored integer
 * @parent: parent node
 * @left: left node
 * @right: right node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Prototypes for your functions should go here */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* Add more prototypes as you implement them */

#endif /* BINARY_TREES_H */
