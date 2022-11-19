#include<iostream>
#include<string.h>
using namespace std;
void Output(char A[200])
{ 
 	for(int i=0; i<strlen(A); i++)
 	{
 		cout<<A[i];
	}
}
main()
{
	char A[200];
	cin.getline(A,200);
	int l=strlen(A);
	for(int i=l-1;i>=0;i--)
	{
		cout<<A[i];
	}
}
