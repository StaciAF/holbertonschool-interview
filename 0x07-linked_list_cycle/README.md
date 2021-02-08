# 0x07. Linked list cycle

### Tasks

#### 0. Linked list cycle mandatory
Write a function in C that checks if a singly linked list has a cycle in it.
* Prototype: int check_cycle(listint_t *list);
* Return: 0 if there is no cycle, 1 if there is a cycle

Requirements:
* Only these functions are allowed: ```write```, ```printf```, ```putchar```, ```puts```, ```malloc```, ```free```

```
carrie@ubuntu:~/0x07$ gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-check_cycle.c 0-linked_lists.c -o cycle
carrie@ubuntu:~/0x07$$ ./cycle 
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle
```