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
        int right_rotations=index+1;
        printf("Number of times array is right rotated is :%d\n",right_rotations);
        int left_rotations=size-1-index;
        printf("Number of times array is left rotated is :%d\n", left_rotations);

        return 0;
}


