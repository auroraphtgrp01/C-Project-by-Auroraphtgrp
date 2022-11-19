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
void UPPER(char A[])
{ 
 for (int i=0; i<length(A);i++)
 {
 	   if(A[i]>=97&&A[i]<=122)
 	   A[i]=A[i]-32;
 }
}
main()
{ 
	char A[200];
	char c[200];
	cin.getline(A, 200); 
	UPPER(A);
	Output(A);
}
