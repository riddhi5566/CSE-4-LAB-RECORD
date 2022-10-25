//swapping two numbers using pointer
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int x,y;
    printf("Enter two numbers: \n");
    scanf("%d %d",&x,&y);
    printf("x = %d y = %d\n",x,y);
    printf("After swapping\n");
    swap(&x,&y);
    printf("x = %d y = %d",x,y);
    return 0;
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
