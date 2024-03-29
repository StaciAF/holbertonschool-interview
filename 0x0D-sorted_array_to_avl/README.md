# 0x0D. Array to AVL

### More Info
**Basic Binary Tree**
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
**AVL Tree**
```
typedef struct binary_tree_s avl_t;
```

### Tasks
#### 0. AVL - From sorted array
Write a function that builds an AVL tree from an array
* Prototype: ``avl_t *sorted_array_to_avl(int *array, size_t size)``;
* Where ``array`` is a pointer to the first element of the array to be converted
* ``size`` is the number of elements in the array
* Your function must return a pointer to the root node of the created AVL tree, or ``NULL`` on failure
* You can assume there will be no duplicate value in the array
* You are not allowed to rotate
* You can only have 3 functions in your file