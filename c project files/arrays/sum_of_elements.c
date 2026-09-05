#include <stdio.h>
int main(){
int temp=1;
    int arr[5]= {1,2,3,4,5};
    for (int i = 0;i<=arr[5];i++){
        temp = arr[i]*temp;
        }
        printf("%d\n", temp);
        return 0;

}