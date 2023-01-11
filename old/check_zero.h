int check_zero (int fboard[81]){
    for(int i = 0; i < 81; i++){
        if(fboard[i] == 0){
            return 0;
        }   
    }
    return 1;
}