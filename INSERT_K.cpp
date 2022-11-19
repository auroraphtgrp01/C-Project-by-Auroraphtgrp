#include<iostream>
using namespace std; 
void Input(int a[], int &n, int &k)
{ 
 	cin >> n;
 	cin >> k;
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
void Process(int a[], int &n, int k){
   int d=0;
   for(int i=0;i<n;i++) 
 	{ 
 	 	if ( k > a[i])
 	 	d++;
 	}

    n++;
     for(int i=n-1;i>d;i--)
        a[i]=a[i-1];    
     	a[d]=k;
}
main()
{ 
 	int A[200], n, k,d=0;;
 	Input(A, n, k);
 	Process(A, n, k);
 	Output(A,n);
}
