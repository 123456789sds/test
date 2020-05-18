#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    /*int k;
    scanf("%d",&k);
    printf("you enter : %d \n",k);*/
    int k;
    printf("Enter an integer: ");
    scanf("%d", &k);
    k = 2*k;
    printf("That integer doubled is: %d\n", k);

    /*float x, y;
    scanf("%f", &x);
    y = x*9.0/5.0 + 32.0;
    printf("%f\n", y);*/

    return 0;

}
