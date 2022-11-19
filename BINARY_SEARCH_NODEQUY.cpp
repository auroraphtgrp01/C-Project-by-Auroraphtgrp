#include<iostream>
using namespace std;
void Input(int A[], int &N, int &X)
{ 	
	cin>>N;
	for(int i=0 ; i<N ; i++ ) 
	{ 
		cin>>A[i];
	}
	cin>>X;
}
void Output(int A[], int N)
{
	for(int i=0; i<N ; i++ ) 
	 {
	 	cout<<A[i]<<" ";
	 }
}
void sortArray(int A[200], int N)
{ 
	for(int i=0; i<N; i++ ) 
	{ 
		for(int j=i+1; j<N; j++) 
		 {
		 	if(A[i]>A[j])
		 	{ 
		 		int Temp=A[i];
		 		A[i]=A[j];
		 		A[j]=Temp;
			 }
		 }
	}
}
int BinarySearch(int A[], int N, int X) {
	int l=0;
	int r=N-1;
	while(r>=1) 
	{
		int mid = (l + (r-1))/2;
		if(A[mid]==X) return mid;
		if(A[mid]>X) 
		r = mid - 1;
		if(A[mid]<X) 
		l=mid + 1;
		}	
	return -1;
}

main()
{
	int A[200], N, X;
	Input(A,N,X);
	Output(A,N);
	sortArray(A,N);
	cout<<BinarySearch(A,N,X);
}

