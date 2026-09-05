#include <stdio.h>
int main(){
    int num;
    int count = 0;
    printf("please enter a given number:");
    scanf("%d", &num);
    int arr[5]={2,10,100,200,400};
    for(int i =0;i<=4;i++){
        if (arr[i]>num){
            count++;
        }
    }
    printf("%d",count);
}