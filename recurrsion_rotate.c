//rotating the elements one by one using recurrsion
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
        int a[argc-2];
        int j=0;
        for(int i=1;i<=argc-2;i++)
        {
                a[j]=atoi(argv[i]);
                j++;
        }
	int rotation=atoi(argv[argc-1]);
        int x;
        x=a[j-1];
        rightRotate(j,a,x);
	
        for(int i=0;i<j;i++)
        {
                printf("%d ",a[i]);
        }
}

void rightRotate(int n, int a[],int x)
{
        if(n==1)
        {
                a[0]=x;
                return a[0];
        }
        else
        {
        a[n-1]=a[n-2];
        return rightRotate(n-1,a,x);
        }

}

