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
void RIGHT(char A[], int n)
{ 
 for (int i=length(A)-n;i<=length(A);i++)
 {
 	cout<<A[i];
 }
}
main()
{ 
	char A[200];
	int n;
	cin.getline(A, 200); 
	cin>>n;
	RIGHT(A, n);
}
