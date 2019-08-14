//clockwise rotation of a 2D matrix 
#include<iostream>
#define ROTATIONS 1
#define M 4
#define N 5
using namespace std;
void clockwise_rotate(int row, int column,int m,int n, int a[M][N])
{
        int prev=0,curr=0;
        if(row>=M/2 ||column>=N/2)
                return ;
        prev=a[row+1][column];
        for(int i=column;i<n;i++)
        {
                curr=a[row][i];
                a[row][i]=prev;
                prev=curr;
        }
        for(int i=row+1;i<m;i++)
        {
                curr=a[i][n-1];
                a[i][n-1]=prev;
                prev=curr;
        }
        for(int i=n-2;i>=column;i--)
        {
		curr=a[m-1][i];
                a[m-1][i]=prev;
                prev=curr;
        }
        for(int i=m-2;i>row;i--)
        {
                curr=a[i][column];
                a[i][column]=prev;
                prev=curr;
        }
	clockwise_rotate(++row,++column,--m,--n,a);
}
int main(void)
{
	int a[M][N]={{1,2,3,4,5,},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int row=0,column=0,m=M,n=N;
	clockwise_rotate(row,column,m,n,a);
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
