#include <stdio.h>
int main(){
    int arr[5];
    for (int i =0;i<=arr[5];i++){
        printf("please enter the vallue of array %d\n", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0 ; j<=arr[5];j++){
    printf("%d", arr[j]);}
    return 0;
    
}