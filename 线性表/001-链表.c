#include "stdio.h"

int main(void){
    int i=5;
    int *p = (int *)malloc(4);
    *p = 5;
    printf("hello\n");
    system("pause");
    return 0;

}