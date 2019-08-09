#include<iostream>
#include<stdlib.h>
using namespace std;
void print_upper_triangle(int M, int N, int **a)
{
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(j>i)
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void print_lower_triangle(int M, int N, int **a)
{
	for(int i=0;i<M;i++)
        {
                for(int j=0;j<N;j++)
                {
                        if(j<i)
                                cout<<a[i][j]<<" " ;
                }
		cout<<endl;
        }
}

int main(int argc, char*argv [])
{
	int M=atoi(argv[1]);
	int N =atoi(argv[2]);
	int **a = new int *[M];
	for(int i=0;i<N;i++)
	{
		a[i]=new int[N];
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
	cout<<"UPPER TRIANGULAR MATRIX IS :"<<endl;
	print_upper_triangle(M,N,a);
	cout<<"LOWER TRIANGULAR MATRIX IS :"<<endl;
	print_lower_triangle(M,N,a);
	return 0;
}
