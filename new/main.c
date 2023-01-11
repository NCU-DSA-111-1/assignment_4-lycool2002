#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "read.h"
#include "can_put.h"
#include "solve.h"
#include "generator.h"


 
void print(int arr[9][9]){

    for (int i = 0; i < 9; i++){
         for (int j = 0; j < 9; j++)
            printf("%d ",arr[i][j]);
         printf("\n");   
    }
}
 
int main()
{
    int grid[9][9] = {0};
    //read("test_board.csv", grid); // 0 means unassigned cells

    // if (solve(grid, 0, 0)==1)
    //     print(grid);
    // else
    //     printf("No solution exists");

    generator(grid,4, 2);
    print(grid);
 
    return 0;
    // This is code is contributed by Pradeep Mondal P
}