#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <windows.h>
using namespace std;
void Input(long long A[], int &N,int &X) {
	cin>>N;
	for(int i=0 ; i<N ; i++ ) { 
		A[i]=rand()%1000000000;
	}	
	X = rand()%1000000000;
}
void quick_Sort(long long A[200],int l, int r){
	if(l>=r) return;
	int pivot = A[(l+r)/2];
	int i=l,j=r;
	do 
	 { 
	  while(A[i]<pivot) i++;
	  while(A[j]>pivot) j--;
	  if(i<=j)
	  { 
	  	int Temp=A[i];
	  	A[i]=A[j];
	  	A[j]=Temp;
	  	i++;
	  	j--;
	  }
	 } while(i<j);
	 quick_Sort(A,l,j);
	 quick_Sort(A,i,r);
}
int BinarySearch(long long A[], int N, int X) {
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
void printArray(long long A[], int N ){
	for(int i=0 ;i<N ; i++ ){
		cout<<"A["<<i<<"] = "<<A[i]<<" ";
	}
}
int Find(long long A[], int N,int X)
{
	for(int i=0; i<N; i++) 
	 { 
	  	if(A[i]==X) return i;
	 }
}
main(){
	long long A[99999];
	int N,X;
	Input(A,N,X);
	int l=0, r=N-1;
	cout<<"Buoc 1: SortArray: "<<endl;
	quick_Sort(A,l,r);
	cout<<"Buoc 2: Find "<<X<<endl;
//	cout<<X<<" in "<<BinarySearch(A,N,X);
cout<<X<<" in "<<Find(A,N,X);
Sleep(3000);
printArray(A,N);
}

