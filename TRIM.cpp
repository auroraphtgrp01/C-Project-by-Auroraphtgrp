#include<iostream>
using namespace std; 
int length(char A[])
{ 
	int i=0;
	while(1)
	{ 
		if(A[i]=='\0') return i;
		i++;
	}
}
void Output(char A[200])
{ 
 	for(int i=0; i<length(A); i++)
 	{
 		cout<<A[i];
	}
}
void Delete(char A[200], int pos)
{
	int n=length(A);
	for(int i=pos;i<n;i++)
	{
		A[i]=A[i+1];
	}
	A[n-1]='\0';
}
void Space(char *A)
{
	for(int i=0; i<length(A); i++) 
	{ 
		if(A[i]=' ' && A[i+1]==' ')
		{
			Delete(A,i);
			i--;
		}
	}
	if(A[0]==' ') Delete(A,0);
	if(A[length(A)-1]==' ') Delete(A, length(A)-1);
}
main()
{ 
	char A[200];
	cin.getline(A, 200); 
	Space(A);
	Output(A);
}
