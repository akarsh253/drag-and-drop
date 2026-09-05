#include <stdio.h>
void increment(int *x){
    (*x)++;
}
int main(){
    int a = 5;
    increment(&a);
    printf("%d",a);
    return 0;
}