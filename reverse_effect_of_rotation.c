#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int a[argc-1];
	int size=0,index,x,diff,max;
		for(int i=1;i<=argc-1;i++)
		{
			a[size]=atoi(argv[i]);
			size++;
		}
		//finding pivot element
		for(int i=0;i<size;i++)
		{
			diff=a[i+1]-a[i];
			if(diff<0)
			{
				max=a[i];
				index=i;
				break;
			}
		}
	int rotations=index+1;
	printf("Number of times array is right rotated is :%d\n",rotations);
	//printing number of left rotations
	//printf("Number of times array is left rotated is :%d\n", size-1-index);
		for(int i=0;i<rotations;i++)
		{
			x=a[0];
			for(int j=0;j<size;j++)
			{
				a[j]=a[j+1];
			}
			a[size-1]=x;
		}
		printf("Array after reversing effect of rotation:\n");
		for(int i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
	return 0;
}


