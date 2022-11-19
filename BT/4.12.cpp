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
	int A[200],n,m=1;
	int B[n];
	Input(A,n);
	B[0]=A[0];
	for(int i=1; i<n; i++)
	{
		int d=0;
		for(int j=0; j<m; j++)
		{
			if(A[i]==B[j]) d++;
		}
	if(d==0)
	{
		B[m]=A[i];
		m++;
	}
	}
	cout<<m;
}
