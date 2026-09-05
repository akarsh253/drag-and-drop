#include <stdio.h>
void hello_world(int a,int b,int c,int d);   // function declaration
int main(){
    hello_world(2,3,4,5);
    return 0;
}
void hello_world(int a , int b,int c , int d){
  int  sum =  a +  b +  c + d;
  printf("%d", sum);
}
