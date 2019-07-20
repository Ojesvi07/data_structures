#include<stdio.h>
int main(void)
{
    int num,size,mid,low,high,flag=0;
    scanf("%d%d",&size,&num);
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=low+high/2;
        if(num<a[mid])
        {
            high=mid-1;
        }
        else if(num==a[mid])
        {
          printf("Number found at: %d\n",mid+1);
          flag=1;
            break;  
        }
        else
        {
            low=mid+1;
        }
     }
    if(flag==0)
    {
        printf("Number not found in array\n");
    }

return 0;

}