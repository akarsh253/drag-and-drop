#include <stdio.h>
int factorial_using_loops(int);
int factorial_using_recursion(int);

int main(){
   int res= factorial_using_loops(4);
   printf("\nfactroaial using loops:%d",res);
   int res2=factorial_using_recursion(4);
   printf("\nfactorial using recursion:%d",res2);
    return 0;
}
int factorial_using_recursions(int num){
    if (num == 0){
    return 1;}
    else{
        return num*factorial_using_recursion(num-1);
    }
}
int factorial_using_loops(int num){
    int result = 1;
    for(int i =2;i<=num;i++){
        result *=i;
    }
    return result;
}