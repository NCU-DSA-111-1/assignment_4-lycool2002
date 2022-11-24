#ifndef save_h
#define save_h



char  save(char mode, const char name[], FILE *fp, NODE *top){
    
    
    printf("enter s to save; enter e to exit;");
    getchar();
    scanf("%c",&mode);
    if(mode == 's') {
        fp = fopen(name, "w+");
        while( top != NULL){
            for (int i = 0; i < 9; i++){
                for (int j = 0; j < 9; j++){
                    fprintf(fp, "%d %d\n", top -> info[i][j][0], top -> info [i][j][1]);
                    
                }
            }
            top = top -> next;
        }
        fclose(fp);
    }
    if(mode == 'e') return 'e';
    else return '0';
    
        
}
#endif /* save_h */

