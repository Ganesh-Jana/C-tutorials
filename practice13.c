#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    int sum = 0;
    for (int i=1,j=n;i<=n && j>=1;i++,j--){
        sum +=i;
        printf("%d\n",j);
    }
//  for (int i=n;i>=1;i--){
//     printf("%d\n",i);
//  }
    printf("sum is %d",sum);
}