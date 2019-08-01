//first half elements right rotated and second half left rotated using recurrsion

#include<stdio.h>
#include<stdlib.h>
void right_rotate_first_half(int *a,  int mid, int x);
void left_rotate_second_half(int *a, int size, int mid, int y);
int main(int argc , char*argv [])
{
	int a[argc-1];
	int size=0;
	for(int i=1;i<=argc-1;i++)
	{
		a[size]=atoi(argv[i]);
		size++;
	}
	int low=0,high=size-1;
	int mid=low+(high-low)/2;
	int x=a[mid];
	int y=a[mid+1];
	right_rotate_first_half(a,mid,x);
	left_rotate_second_half(a,size,mid,y);
	printf("Array after first half right rotated and second half left rotated :\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void right_rotate_first_half(int *a , int mid, int x)
{
	if(mid==0)
	{
		a[0]=x;
		return;
	}
	else
	{
		a[mid]=a[mid-1];
		mid--;
		right_rotate_first_half(a,mid,x);
	}
}
void left_rotate_second_half(int *a, int size, int mid, int y)
{

	if(mid==(size-1))
	{
		a[size-1]=y;
		return;
	}
	else
	{
		a[mid+1]=a[mid+2];
		mid++;
		left_rotate_second_half(a,size,mid,y);
	}
}
