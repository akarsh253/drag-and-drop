#include <stdio.h>
int main(){
    int n;
    int sum= 1;
    int x =14;
    int temp = 0;
    
    
    printf("enter the number of element in array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter the array element:");
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<n;i++){
        for (int j = i+1;j<=n;j++){}
        temp = temp +arr[i];
        if (temp + arr[i]==x){
            printf("%d,%d", temp,arr[i]);
        }
        else{
            printf("no such pairs exist");
        }

    }
   
   
}