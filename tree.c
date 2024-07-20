#include<stdio.h>

int main(){
    int hgh;

    printf("\n\nenter the hight: ");
    scanf("%d", &hgh);
    printf("\n");
    
    hgh = hgh-1;
    int tree = 0;
    int space = hgh-1;
    int end  = hgh-1;

    
    for(int i = 0; i <= hgh; i++){
        for(int j = 0; j <= space; j++){
            printf(" ");
            
        }
        space = space-1;
        for(int o = 0; o <= tree; o++){
            printf("#");
            
        }
        tree = tree+2;
        printf("\n");
    }
    for(int u = 0; u <= end; u++){
        printf(" ");
    }
    printf("#\n\n");

    return 0;
}