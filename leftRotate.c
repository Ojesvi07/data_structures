#include<stdio.h>
int main(int argc, char*argv [])
{
    int a[argc-1];
    int j=0;
    for(int i=1;i<argc;i++)
    {
        a[j]=atoi(argv[i]);
        j++;
    }
    for(int i=1;i<argc;i++)
    {
        printf("%d\n",a[i]);
    }
    int r;
     printf("Enter the times to left rotate array:\n");
    scanf("%d",&r);

    for(int j=0;j<r;j++)
    {
   
    int x=a[0];
    for(int i=1;i<j;i++)
    {
        a[i]=a[i+1];
    }
    a[argc-1]=x;
    }
    for(int i=1;i<j;i++)
    {
        printf("%d ",a[i]);
    }


}

