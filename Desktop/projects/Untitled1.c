#include <stdio.h>
#include <stdlib.h>
int main () {
    int a,b ;
    printf("entre la valueur de a:");
    scanf("%d",&a);
    printf("la valeur de b :");
    scanf("%d",&b);
    printf("a + b = %d\n",a + b);
    printf("a - b = %d\n",a - b);
    printf("a * b = %d\n",a * b);
    if (b != 0) {
            printf("a / b = %d\n",a / b);
            printf("a %% b = %d\n",a % b);
            }  else
            {  printf("Division par zéro n'est pas autorisée.\n");
            }

}
