#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("entre la valeur f :");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("%.2f  f . %.2f c\n ",f,c);
    if(c<0){
            printf("très froid\n");


    }else if(c<15){
        printf("froid\n");
    }else if(c<30){
        printf(" chaud\n");
    }else
    printf("tres chaud\n");



    return 0;
}
