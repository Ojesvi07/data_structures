#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv [])
{
	long int first_num,second_num,size_of_series,sum;
	first_num=0;
	second_num=1;
	size_of_series=atoi(argv[1]);
	printf("%ld ",first_num);
	printf("%ld ",second_num);
	for(int i=0;i<size_of_series-2;i++)
	{
		sum=0;
		sum=first_num+second_num;
		printf("%ld ",sum);
		first_num=second_num;
		second_num=sum;
	}
	
	return 0;
}
		


