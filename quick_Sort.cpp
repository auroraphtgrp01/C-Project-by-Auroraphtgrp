#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void Input(int A[], int &N) {
	cin>>N;
	for(int i=0 ; i<N ; i++ ) { 
		A[i]=rand()%100;
	}	
}
void printArray(int A[], int N ){
	for(int i=0 ;i<N ; i++ ){
		cout<<A[i]<<"  ";
	}
}

void quick_Sort(int A[200],int l, int r){
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

main(){
	int A[9999];
	int N;
	Input(A,N);
	int l=0, r=N-1;
	quick_Sort(A,l,r);
	printArray(A,N);
}


