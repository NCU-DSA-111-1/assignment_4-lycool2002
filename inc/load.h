#ifndef load_h
#define load_h

NODE* load(const char name[],FILE *fp, NODE *top){//
    
    NODE* tmp = NULL;
    int info[9][9][2] = {0};
    fp = fopen(name, "r");
    
    int a = 0;
    while(fscanf(fp, "%d", &a) != EOF){
        fseek(fp, -1L, SEEK_CUR);
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                fscanf(fp, "%d ", &info[i][j][0]);
                fscanf(fp, "%d\n", &info[i][j][1]);
            }
        }

        top = push(top, info);
        printf("load 1 successfully");
        //if(*fp == EOF)break;
    }

    
    tmp = top;
    while(tmp -> next != NULL) tmp = tmp -> next;
    tmp -> next = top;
    fclose(fp);
    return top;
}

#endif /* load_h */
