#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "read.h"
#include "can_put.h"
#include "solve.h"
#include "generator.h"
#include "print.h"

int main(int argc, char *argv[] )
{
    
    int grid[9][9] = {0};
    if(argv[1][1] == 's'){
        clock_t start = clock();
        read(argv[2], grid);

        if (solve(grid, 0, 0)==1)
            print(grid);
        else
            printf("No solution exists");
        clock_t end = clock();

         
        double duration = (double)(end - start) / CLOCKS_PER_SEC;  
        printf("\n solve take %f seconds\n", duration );    
    }
    if(argv[1][1] == 'g'){
        int max = 0;
        int min = 0;
        printf("enter max space of a col\n");
        scanf("%d" ,&max);
        printf("enter min space of a col\n");
        scanf("%d" ,&min);
        generator(grid, max, min);
        print(grid);
    }
    return 0;

}