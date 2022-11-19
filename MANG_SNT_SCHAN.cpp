#include<iostream>
#include<cmath>
using namespace std;
void Input(int a[], int &n)
{ 
 	cin >> n;
 	for(int i=0; i<n;i++)
 	{	
 		cin >> a[i];
	}
}
int SNT(int k)
{ 
 	if (k<2) return false; 
 	for(int i=2; i<=sqrt(k); i++) 
 	{	
 	 	if(k % i == 0 ) return false;
   	}
	  return true;
}
int Sochan(int n)
{ 
 	if(n % 2 == 0 ) return true; 
	else return false;
}
main()
 {  int a[100],n,s=0;
  	Input(a,n);
  	cout<<"BAI 1"<<endl;
  	for(int i=0;i<n;i++) 
  	{ 
  	 	 if(SNT(a[i])) cout<<a[i]<< " ";
	}
	cout<<endl;
	cout<<"BAI 2"<<endl;
  	for(int i=0;i<n;i++)
  	{  
  	 	 if(Sochan(a[i])) s+=a[i];
	}
	cout<<s;
 }
