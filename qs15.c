#include<stdio.h>
int main(){
    //which multiple of 7
    int n;
    do{
        printf("enter number :");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n%7 ==0){
            break;
        }
    }while(1);
    printf("thank you guyss");
}