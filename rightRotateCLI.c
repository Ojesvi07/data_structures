#include<stdio.h>
int main(int argc, char*argv [])
{

    	int a[argc-2]; 
	int j=0;
    	for(int i=1;i<=argc-1;i++)
    	{
        	a[j]=atoi(argv[i]);
		j++;
    	}	
    	int r=atoi(argv[argc-1]);
	for(int j=0;j<r;j++)
    	{

        	int x=a[argc-3];
        	for(int i=argc-3;i>=0;i--)
        	{
                	a[i]=a[i-1];
        	}
        	a[0]=x;
    	}
   	 printf("Array after %d rotations :\n",r);
    	 for(int i=0;i<argc-2;i++)
    	{
        	printf("%d ",a[i]);
    	}
	return 0;
}
