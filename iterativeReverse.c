#include<stdio.h>
int main(void)
{
    int n,x,y,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    x=0;y=n-1;
    for(int i=0;i<n/2;i++)
    {
        temp=a[x];
        a[x]=a[y];
        a[y]=temp;
        x++;
        y--;
    }
    printf("Rotated array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}