#include<iostream>
#include<stdlib.h>
using namespace std;
void print_anticlockwise_spiral(int M,int N,int **a)
{
	int row=0,column=0,m=M,n=N;
	while(row<M/2 && column<N/2)
	{
		for(int i=row;i<m;i++)
		{
			cout<<a[i][column]<<" ";
		}
		for(int i=column+1;i<n;i++)
		{
			cout<<a[m-1][i]<<" ";
		}
		for(int i=m-2;i>=row;i--)
		{
			cout<<a[i][n-1]<<" ";
		}
		for(int i=n-2;i>0;i--)
		{
			cout<<a[row][i]<<" ";
		}
		row++;column++;m--;n--;
	}
}
int main(int argc, char*argv[])
{
	int M=atoi(argv[1]);
	int N=atoi(argv[2]);
	int k=3;
	int **a= new int*[M];
	for(int i=0;i<N;i++)
	{
		a[i]=new int[N];
	}
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			a[i][j]=atoi(argv[k]);
			k++;
		}
	}
	print_anticlockwise_spiral(M,N,a);
	return 0;
}
