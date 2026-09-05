#include <stdio.h>
int main(){
    int count =0;
    int num;
    printf("please enter the value of number:");
    scanf("%d", &num);
    int arr[5]={2,4,6,8,10};
    for (int i =0 ; i<5;i++){
        for (int j =i+1;j<=7;j++){
            for (int k = i+2;k<=7;k++){
            if (arr[i]+arr[j]+arr[k]==num)  
        count++;     }}
    }
    printf("%d", count);
}