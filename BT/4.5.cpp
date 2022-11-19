#include<iostream>
using namespace std;
void Input(int A[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
	{	
		cin>>A[i];
	}
}
void Output(int A[], int n)
{
	for(int i=0; i<n; i++)
	{ 
	 	cout<<A[i]<<" ";
	}
}
//int Process(int A[],int n)
//{ 
//	for(int i=0; i<n; i++)
//	{ 
//	 	if(A[i]>A[i+1])
//	 	{ 	
//	 		return false;
//		 }
//	}
//return true;
//}
main()
{ 
	int A[200], n;
	Input(A,n);
	for(int i=0; i<n; i++)
	{
	
	if(A[i]>A[i+1])
	{
		cout<<"FALSE";
		break;
	 } 
	else cout<<"TRUE";
}
}

