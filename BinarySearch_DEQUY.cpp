#include<iostream>
using namespace std;
void Input(int A[200], int &N, int &X) {  	
	cin>>N;
	for(int i=0; i<N; i++ ) 
	{ 
		cin>>A[i];
	}
	cin>>X;
}
void printArray(int A[200], int N ) { 
	for(int i=0; i<N ; i++ ) 
	{ 
		cout<<A[i]<< " ";
	}
}
void sortArray(int A[200],int N ) { 
	for(int i=0 ;i<N; i++)
	{	
		for(int j=i+1; j<N ; j++) {
			if(A[i]>A[j])
			{ 
			int Temp=A[i];
			A[i]=A[j];
			A[j]=Temp;
			}
		}
	}
	
}
int BinarySearch(int A[200], int X, int l, int r){

	if(r>=1){
	
	int m=l+(r-1)/2;
	if(A[m]==X) return m;
	
	 	if(A[m]<X) {
	 		return BinarySearch(A,X,m+1,r);
		}
	 		
	 		if(A[m]>X)
	 		 { 
	 		 return BinarySearch(A, X, l, m-1 );
			  }
}
		return -1;
}
main()
{ 
	int A[200], N,X;
	Input(A,N,X);
	sortArray(A,N);
	printArray(A,N);
	cout<<endl;
	int l=0,r=N-1;
	cout<<BinarySearch(A,X,l,r);

}
