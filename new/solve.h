
int solve(int grid[9][9], int row, int col){

    if (row == 9 - 1 && col == 9)
        return 1;
    if (col == 9){
        row++;
        col = 0;
    }
   
    if (grid[row][col] > 0)
        return solve(grid, row, col + 1);
 
    for (int num = 1; num <= 9; num++){
         

        if (can_put(grid, row, col, num)==1)
        {

            grid[row][col] = num;
           
            if (solve(grid, row, col + 1)==1)
                return 1;
        }
       
        grid[row][col] = 0;
    }
    return 0;
}