#include <stdio.h>
int main(){
    int sum = 0;
int a[10];
for (int i =0 ; i<=9 ;i++){
    printf("enter the marks:");
    scanf("%d",&a[i]);
}
for (int j = 0;j<=9;j++){
    sum = a[j] +sum;

}
sum = sum/10;
printf("%d", sum);
}