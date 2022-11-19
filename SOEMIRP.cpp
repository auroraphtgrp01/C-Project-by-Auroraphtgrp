#include<iostream>
#include<cmath>
using namespace std; 
int SoNgto(int n)
{ 
 	if(n<2) return false;
 	for(int i=2;i<= sqrt(n);i++)
 	 { 
 	 	if(n % i == 0)
 	 	 return false;
	  }
return true;
}
int tachso(int n)
{ 
 	int kq=0;
 	while(n > 0 ) 
 	 	{ 
 	 	 	int a = n % 10; 
 	 	 	kq=kq * 10 + a; 
 	 	 	n=n/10;
		  }
		return kq;
}
int emirp(int n)
{ 
	if(SoNgto(n) && SoNgto(tachso(n)))
	{
		return true;}
		else return false;
	
}
main()
{
	for(int i=1; i<1000; i++)
{ 
 	if(emirp(i))
 	cout<<i << endl;
}
}
