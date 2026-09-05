#include <stdio.h>
void new( int *x , int *y){
 int temp;
 temp = *x;
 *x = *y;
 *y = temp;
 return;

}
int main(){
    int temp;
    int a =5;
    int b = 6;
    new (&a,&b);
    printf("the value of %d\n",a);
    printf("the value of %d\n",b);
    return 0;
}