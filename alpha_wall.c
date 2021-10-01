#include <stdio.h>
int main()
{
    int rows ;
    int to_print = 65 ;

    printf("How Many Rows You Want To Get Printed :\t") ;
    scanf("%d", &rows) ;
    
    for (int i = 0; i < rows; i ++){
        for (int j = 0; j < (rows - i); j++){
            printf("%c\t" , to_print + j) ;
        }
        for (int j = 0 ; j < ((2 * i) - 1); j++){
            printf("\t");
        }
        for (int l = 0; l < (rows - i); l++){
            if(i == 0 && l == 0)
                continue;
            else    
                printf("%c\t" , (to_print + rows - l - i - 1)) ;
        }
        printf("\n\n") ;
    }
    

    return 0;
}
