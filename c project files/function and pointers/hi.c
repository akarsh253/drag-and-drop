#include <stdio.h>
int sum(int,int);
int main(){
    int a = 10,b=20,c;
    c = sum(a,b);
    printf("sum is %d",c);
    return 0;
}
int sum (int x , int y){
    int s ;
    s = x+y;
    return (s);
}