void generator(int grid[9][9], int max_s, int min_s){//1-9 位置1-9 要變空白的數量(每行1-9) 

    srand( time(NULL) );

    int seed[27];
    for(int i = 0; i< 18; i++){
        seed[i] = (rand() % 9) + 1;
    }
    for(int i = 0; i< 9; i++){
        seed[i+18] = rand() % (max_s - min_s + 1) + min_s;
    }

    for(int i = 0; i< 9; i++){
        grid[i][seed[i+9]] = seed[i];
    }
    solve(grid, 0, 0);

    for(int i = 0; i< 9; i++){
        int sum = seed[i+18];
        while(sum>0){
            for(int j = 0; j< 9; j++){
                if(grid[i][j] != 0){
                    int a = (int)rand() % 2;
                    if(a == 0 ){
                        grid[i][j] = 0;
                        sum -- ;
                    }  
                }               
            }    
        }
    }   
}