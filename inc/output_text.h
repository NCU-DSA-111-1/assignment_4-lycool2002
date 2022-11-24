#ifndef output_text_h
#define output_text_h

void outputtext(int solider ,int player){
    int choose = 0;
    if(player == 1)solider = solider;
    else if (player == 2)solider = - solider;
    switch(solider){
        case 1:
            printf("\033[01;34m 步\033[0m");
            break;
        case 2:
            printf("\033[01;34m 香\033[0m");
            break;
        case 3:
            printf("\033[01;34m 桂\033[0m");
            break;
        case 4:
            printf("\033[01;34m 銀\033[0m");
            break;
        case 5:
            printf("\033[01;34m 金\033[0m");
            break;
        case 6:
            printf("\033[01;34m 王\033[0m");
            break;
        case 7:
            printf("\033[01;34m 角\033[0m");
            break;
        case 8:
            printf("\033[01;34m 飛\033[0m");
            break;
        case -1:
            printf("\033[01;31m 步\033[0m");
            break;
        case -2:
            printf("\033[01;31m 香\033[0m");
            break;
        case -3:
            printf("\033[01;31m 桂\033[0m");
            break;
        case -4:
            printf("\033[01;31m 銀\033[0m");
            break;
        case -5:
            printf("\033[01;31m 金\033[0m");
            break;
        case -6:
            printf("\033[01;31m 王\033[0m");
            break;
        case -7:
            printf("\033[01;31m 角\033[0m");
            break;
        case -8:
            printf("\033[01;31m 飛\033[0m");
            break;
        default:
            printf("\033[01m 0 \033[0m");
            break;
    }
    
}
#endif /* output_text_h */
