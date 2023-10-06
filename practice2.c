#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
    for (int h=0;h<24;h++)
    {
        for (int m=0;m<60;m++)
        {
            for(int s=0;s<60;s++)
            {
               clrscr();
                printf("\n time [%d:%d:%d]",h,m,s);
                delay (1000);
            }
        }
    }
}