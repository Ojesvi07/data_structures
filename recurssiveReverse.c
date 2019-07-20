#include<stdio.h>
int main(void)
{
    int n,x,y;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    x=0;y=n-1;
    reverse(a,n,x,y);
    printf("Rotated array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
    void reverse(int a[],int n,int x,int y)
    {
        int temp;
        if(y<x)
        {
            return ;
        }
        
        for(int i=0;i<n/2;i++)
        {
            temp=a[x];
            a[x]=a[y];
            a[y]=temp;
            x++;
            y--;
        }
        reverse(a,n,x,y);
    }