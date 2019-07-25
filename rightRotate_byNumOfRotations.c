#include<stdio.h>
#include<stdlib.h>
int main( int argc , char*argv [])
{
	int a[argc-2];
	int size=0;
	for(int i=1;i<=argc-2;i++)
	{
		a[size]=atoi(argv[i]);
		size++;
	}

	int dup_size=size;
	int dup_size2=size;
	int rotations=atoi(argv[argc-1]);
	int temp[rotations];

	for(int i=rotations-1;i>=0;i--)
	{
		temp[i]=a[size-1];
		size--;
	}
	for(int i=dup_size-rotations-1;i>=0;i--)
	{
		a[dup_size-1]=a[i];
		dup_size--;
	}
	for(int i=0;i<rotations;i++)
	{
		a[i]=temp[i];
	}
	for(int i=0;i<dup_size2;i++)
	{
		printf("%d ",a[i]);
	}


return 0;
}

