# 0x04. Sandpiles

### Resources
Read or Watch: 
* [Sandpiles - Numberphile](https://www.youtube.com/watch?v=1MtEUErz7Gg)

### Tasks

#### 0. Sandpiles sum mandatory
Write a function that computes the sum of two sandpiles
* Prototype: ```void sandpiles_sum(int grid1[3][3], int grid2[3][3]);```
* You can assume that both grid1 and grid2 are individually **stable**
* A sandpile is considered **stable** when none of its cells contains more than 3 grains
* When your function is done, grid1 must be **stable**
* grid1 must be printed before each toppling round, only if it is unstable (See example)
* You’re not allowed to allocate memory dynamically

```
alex@~/0x04-sandpiles$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
alex@~/0x04-sandpiles$ ./0-sandpiles 
3 3 3   1 3 1
3 3 3 + 3 3 3
3 3 3   1 3 1
=
4 6 4
6 6 6
4 6 4
=
2 5 2
5 6 5
2 5 2
=
4 2 4
2 6 2
4 2 4
=
0 5 0
5 2 5
0 5 0
=
2 1 2
1 6 1
2 1 2
=
2 2 2
2 2 2
2 2 2
```
```
alex@~/0x04-sandpiles$ ./0-sandpiles 
0 0 0   3 3 3
0 0 0 + 3 3 3
0 0 0   3 3 3
=
3 3 3
3 3 3
3 3 3
```
