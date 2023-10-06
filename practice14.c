#include<stdio.h>
int main(){
    //the table of s number input by user n=2
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    for (int i=1; i<=10;i++){
    printf("%d\n",n*i);
    }
}