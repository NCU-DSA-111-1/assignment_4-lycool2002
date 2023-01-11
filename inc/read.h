void read(char name[], int grid[9][9]){
    
    FILE *fp = fopen(name, "r");
    
    int num = 0;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 8; j++){
            fscanf(fp, "%d,", &num);
            grid[i][j] = num;
        }
        fscanf(fp, "%d\n", &num);
        grid[i][8] = num;
    }
    fclose(fp);
}



