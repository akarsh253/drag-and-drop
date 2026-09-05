#include <stdio.h>
void count1to100();/*function prototype.*/
int main(){
    count1to100();/*function calling.*/
    return 0;

}
void count1to100(){/*Function declaration.*/
    for(int i =1; i<=100;i++){
        printf("%d\t", i);
    }
}