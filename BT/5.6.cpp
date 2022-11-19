#include<iostream>
#include<string.h>
using namespace std;
void dele(char A[200],int vtri)
{
	int l=strlen(A);
 	for(int i=vtri;i<=l;i++)
 	{
 		A[i]=A[i+1];
	 }
	 l--;
}
void Output(char A[200])
{ 
 	for(int i=0; i<strlen(A); i++)
 	{
 		cout<<A[i];
 		if(A[i]==' ') cout<<endl;
		 	}
}
main()
{
	char A[200];
	cin.getline(A, 200);
	int l=strlen(A);
	for(int i=0; i<=l; i++)
	{ 
		for(int k='0'; k<'9'; k++)
		{ 
			if(A[i]==k) 
			{
			dele(A, i);
			l--;
			i--;
			}
		}
	}
	Output(A);
}
