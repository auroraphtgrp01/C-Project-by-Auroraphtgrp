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
	}
}
main()
{
	char A[200];
	cin.getline(A,200);
	int l=strlen(A);
	
	for(int i=0; i<l;i++)
	{ 
		if(A[0]==32) {
		dele(A,0);l--;}
  		if(A[l]==32) {
		  dele(A,l);l--;}	
		if(A[i]==32 && A[i+1]==32) 
		{
		dele(A,i);
		i--;
		l--;
	}
	}
Output(A);	
}
