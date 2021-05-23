<div align="center"><img src="https://user-images.githubusercontent.com/66263776/98416555-43fa9b80-204d-11eb-800a-df8e19b62655.jpg" width="700" height= "200"> </div>

# <div align="center"><img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"> 🏋 Exercise  Sandpiles 🏋 <img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"></div>

Write a function that computes the sum of two sandpiles
* Prototype: void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
* You can assume that both grid1 and grid2 are individually stable
* A sandpile is considered stable when none of its cells contains more than 3 grains
* When your function is done, grid1 must be stable
* grid1 must be printed before each toppling round, only if it is unstable (See example)
* You’re not allowed to allocate memory dynamically

<details>
<summary>🛠 <b>Code preview <code>0-main.c</code></b> 🛠</summary>

```C
#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"

/**
 * print_grid_sum - Print 3x3 grids sum
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */
static void print_grid_sum(int grid1[3][3], int grid2[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid1[i][j]);
        }

        printf(" %c ", (i == 1 ? '+' : ' '));

        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid2[i][j]);
        }
        printf("\n");
    }
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    int grid1[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };
    int grid2[3][3] = {
        {1, 3, 1},
        {3, 3, 3},
        {1, 3, 1}
    };

    print_grid_sum(grid1, grid2);

    sandpiles_sum(grid1, grid2);

    printf("=\n");
    print_grid(grid1);

    return (EXIT_SUCCESS);
}
```
</details>

### INPUT

```SHELL
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
./0-sandpiles 
```

### OUTPUT

```SHELL
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
<details>
<summary>🛠 <b>Code preview <code>1-main.c</code></b> 🛠</summary>

```C
Same as 0-main.c except:
int grid1[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    int grid2[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };
```
</details>

### INPUT

```SHELL
gcc -Wall -Wextra -Werror -pedantic 1-main.c 0-sandpiles.c -o 0-sandpile
./0-sandpiles 
```
### OUTPUT

```SHELL
0 0 0   3 3 3
0 0 0 + 3 3 3
0 0 0   3 3 3
=
3 3 3
3 3 3
3 3 3
```
## :memo::fountain_pen: WHITEBOARD :fountain_pen: :memo:
<details>
<summary>📓✏️✏️ <b>Whiteboard<b> ✏️✏️📓</summary>
<div align="center"><img src="https://user-images.githubusercontent.com/66263776/119271024-470e4100-bbc5-11eb-84df-76fb755646b1.png" width="800" height= "500"> </div>
<div align="center"><img src="https://user-images.githubusercontent.com/66263776/119271719-4f1bb000-bbc8-11eb-9301-f83d86a2bdf2.png" width="800" height= "500"> </div>
</details>