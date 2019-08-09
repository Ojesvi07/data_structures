#include<iostream>
#include<stdlib.h>
using namespace std;
void rotate_anticlockwise(int M,int N,int **a)
{
	int m=M,n=N;
        int prev=0,curr=0,row=0,column=0;
        while(row<M/2 && column<N/2)
        {
                prev=0;
                curr=0;
                prev=a[row][column+1];
                for(int i=row;i<m;i++)
                {
                        curr=a[i][column];
                        a[i][column]=prev;
                        prev=curr;
                }
                for(int i=column+1;i<n;i++)
                {
                        curr=a[m-1][i];
                        a[m-1][i]=prev;
                        prev=curr;
                }
                for(int i=m-2;i>=row;i--)
                {
                        curr=a[i][n-1];
                        a[i][n-1]=prev;
                        prev=curr;
                }
                for(int i=n-2;i>0;i--)
                {
                        curr=a[row][i];
                        a[row][i]=prev;
                        prev=curr;
                }
                row++;
                column++;
                m--;
                n--;
        }
}
void print(int M,int N,int **a)
{
for(int i=0;i<M;i++)
        {
                for(int j=0;j<N;j++)
                {
                        cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }
}

int main(int argc, char*argv[])
{
	int M=atoi(argv[1]);
	int N=atoi(argv[2]);
	int **a= new int*[M];
	for(int i=0;i<M;i++)
	{
		a[i]=new int [N];
	}
	int k=3;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			a[i][j]=atoi(argv[k]);
			k++;
		}
	}
	rotate_anticlockwise(M,N,a);
	print(M,N,a);
return 0;
}
