#include<iostream>
#include<string.h>
using namespace std;
void Output(char A[200])
{ 
 	for(int i=0; i<strlen(A); i++)
 	{
 		cout<<A[i];
 		if(A[i]==' ') cout<<endl;
		 	}
}
int Max(int A[],int n)
{ 
 int max=A[0];
 for(int i=0; i<n;i++)
 {
 	if(A[i]>max) max=A[i];
 	
 }
 return max;
}
main()
{
	char A[200];
	int B[200];
	cin.getline(A, 200);
	int l=strlen(A);
	for(int i=0; i<l; i++)
	B[i]=0;
	for(int i=l-1;i>=0;i--)
	{
		if(A[i]!=' ') 
		{
			B[i-1]=B[i]+1;
		}
	}
	
	int k=Max(B,l);
	for(int i=0; i<l; i++)
	{ 
		if(B[i]==k) 
		 { 
		 	for(int j=i+1;j<=k+i;j++)
		 	{
		 		 cout<<A[j];
			 }
			 cout<<endl;
		 }
		 
	}
}
