#include <stdio.h>
int min(int a , int b){
    if (a<b) return a;
    else return b;
}
int divisor(int x , int y){
    int hcf;
    for (int i =min(x,y); i>=1; i--){
        if ( x %i == 0 && y%i==0){
            hcf = i;
            break;


        }
        return hcf;
         
    }
    
}
int main(){
    int a , b;
    printf("please enter the values of two numbers a : ");
    scanf("%d",&a);
    printf("please enter the values of two numbers b : ");
    scanf("%d",&b);
    int hcf = divisor(a,b);
    printf("the hcf of %d and %d is : %d" ,a,b,hcf);
    
    
    
    

}