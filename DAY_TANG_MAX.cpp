#include<iostream>
using namespace std; 
void Input(int a[], int &n)
{ 
 	cin >> n;
 	for(int i=0; i<n;i++)
 	{	
 		cin >> a[i];
	}
}
main()
{ 
 int A[100],B[100], n,d=1,j=0;
 Input(A, n);
 for(int i =0; i<n;i++) 
  { 
   if(A[i]<A[i+1]) d++;
   else {
   	B[j]=d;
   	d=1;
   	j++;
   }
  }
int max=B[1];
for(int i=0;i<j;i++)
{
	if(B[i]>max) max=B[i];
}
  cout<<max;
}
