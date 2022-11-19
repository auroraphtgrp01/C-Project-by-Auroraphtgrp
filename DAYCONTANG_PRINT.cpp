#include<iostream>
using namespace std; 
void Input(int a[], int &n, int &k)
{ 
 	cin >> n;
 	for(int i=0; i<n;i++)
 	{	
 		cin >> a[i];
	}
}
void Output(int a[], int &n)
{ 
 	for(int i=0; i<n;i++)
 	{	
 		cout<< a[i] << " " ;
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
 	int A[200], n, k,d=0,B[200];
 	Input(A, n, k);

	for(int i=0; i<n; i++) 
	{ 
	 B[i]=1; 
	}
	for(int i=n-1; i>0; i--) 
	 {  
	  if(A[i]>=A[i-1])
	  {
	  	B[i-1]=B[i]+1;
	  }
	 }
 int sl=Max(B,n); 
 for(int i=0; i<n; i++) 
  { 
   if(B[i]==sl)
   {
   	for(int j=i;j<sl+i;j++) 
   	 cout<<A[j]<< " ";
   }
   cout<<endl;
  }
 	
}

