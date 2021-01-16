# 0x05. Linked list palindrome

### Tasks

#### 0. Linked list palindrome mandatory
Write a function in C that checks if a singly linked list is a palindrome.

* Prototype: ```int is_palindrome(listint_t **head);``
* Return: ```0``` if it is not a palindrome, ```1``` if it is a palindrome
* An empty list is considered a palindrome

```
carrie@ubuntu:0x03$ gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-is_palindrome.c -o palindrome
carrie@ubuntu:0x03$ ./palindrome
1
17
972
50
98
98
50
972
17
1
Linked list is a palindrome
```