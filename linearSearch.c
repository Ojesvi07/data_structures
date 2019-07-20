#include<stdio.h>
int main()
{
    int n,num,flag=0,index;
    scanf("%d%d",&n,&num);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {

        if(a[i]==num)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("Number is found at index : %d\n",index);
    }
    else
    {
        printf("Number not found ");
    }
    

}