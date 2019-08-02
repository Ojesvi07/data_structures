//to remove duplicate elements from string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[30];
	char str_new[30];
	int size=0;
	cout<<"Enter the String: ";
	cin.getline(str,30);
		for(int i=0;str[i]!='\0';i++)
		{
			for(int j=i+1;str[j]!='\0';j++)
			{
				if(str[i]==str[j] && str[j]!='?')
				{

					str[j]='?';
				}
			}
		}

		//direct printing of string after removal of duplicates without storing in new string
		for(int i=0;str[i]!='\0';i++)
                {
                        if(str[i]!='?')
                        {
                          	cout<<str[i]<<" ";
                        
                        }
                }


		//new string stored after removal of duplicates
		/*for(int i=0;str[i]!='\0';i++)
		{
			if(str[i]!='?')
			{
				str_new[size]=str[i];
				size++;
			
			}
		}
		for(int j=0;str_new[j]!='\0';j++)
		{
			cout<<str_new[j];
		}*/
	return 0;
} 
