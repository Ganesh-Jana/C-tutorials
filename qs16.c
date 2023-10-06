#include<stdio.h>
int main(){
    //print all number from 1 to 10 expect 6

    for (int i=1;i<=10;i++){
        if (i ==7){
            continue;
        }
        printf("%d\n",i);
    }
}