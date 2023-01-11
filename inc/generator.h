void generator(int grid[9][9], int max_s, int min_s){//1-9 位置1-9 要變空白的數量(每行1-9) 

    srand( time(NULL) );

    int seed[27];

    for(int i = 0; i< 9; i++){
        int filled = 0;
        while(filled == 0){
            int a = (rand() % 9);
            filled = 1;
            for(int j = 0; j < i; j ++){
                if (a == seed[j]) filled = 0;
            } 
            if(filled == 1) seed[i] = a; 
        }
    }
    
    for(int i = 0; i< 9; i++){
        seed[i+9] = (rand() % 9);
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
                    int a = rand() % 5;
                    if(a == 1 ){ 
                        if(sum != 0){
                            grid[i][j] = 0;
                            sum-- ;
                        } 
                    }  
                }               
            }    
        }
    }   
}