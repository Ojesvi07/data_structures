#include<iostream>
#include<cstring>
using namespace std;
int main()
{
        char str[50];
        cout<<"Enter the string: "<<endl;
        cin.getline(str,50);
        int count=0;
        for(int i=0;str[i]!='\0';i++)
        {
                count++;
        }
        cout<<"Length of string is : "<<count<<endl;
        return 0;
}


