#include <stdio.h>
int main(){
    int i = 4,*x;
    int j = 1.5,*y;
    int k = 'c',*z;
    printf("value of i = %d\n",i);
    printf("value of j = %f\n",j);
    printf("value of k is %d\n",k);
    x = &i; y = &j; z= &k;
    printf("original address of x is definded as follos: %p\n",x);
    printf("original address of x is definded as follos: %p\n",y);
    printf("original address of x is definded as follos: %p\n",z);
    x++;y++;z++;
    printf("new address of x is definded as follos: %p\n",x);
     printf("new address of x is definded as follos: %p\n",x);
 printf("new address of x is definded as follos: %p\n",x);

 return 0;




}
