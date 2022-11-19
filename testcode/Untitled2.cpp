#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void Input(long long A[], long long &N) {
	cin>>N;
	for(long long i=0 ; i<N ; i++ ) { 
		A[i]=rand()%10000000;
	}	
}
void printArray(long long A[], long long N ){
	for(long long i=0 ;i<N ; i++ ){
		cout<<A[i]<<"  ";
	}
}

void quick_Sort(long long A[200],long long l, long long r){
	if(l>=r) return;
	int pivot = A[(l+r)/2];
	int i=l,j=r;
	do 
	 { 
	  while(A[i]<pivot) i++;
	  while(A[j]>pivot) j--;
	  if(i<=j)
	  { 
	  	long long Temp=A[i];
	  	A[i]=A[j];
	  	A[j]=Temp;
	  	i++;
	  	j--;
	  }
	 } while(i<j);
	 quick_Sort(A,l,j);
	 quick_Sort(A,i,r);
}
void BubleSort(long long A[], long long N)
{
	for(int i=0; i<N; i++)
	{
		for(int j=i+1; j<N; j++)
		 {
		 	if(A[i]>A[j])
		 	{
		 		long long Temp=A[i];
	  			A[i]=A[j];
	  			A[j]=Temp;
	  		}
		 }
	}
}
main(){
	long long A[99999];
	long long N;
	Input(A,N);
	int l=0, r=N-1;
//	quick_Sort(A,l,r);
	BubleSort(A,N); 
	printArray(A,N);
}


