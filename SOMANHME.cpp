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
int soManhMe(int n)
{ 
 	for(int i=2; i<=sqrt(n);i++)
 	{ 
 	 	if(SoNgto(i))
 	 	{if(n%i==0 && n % (i*i) ==0 )
 	 	{return true;
		  }
		  }
	 }
	 return false;
}
main()
{
	for(int i=1; i<1000; i++)
{ 
 	if(soManhMe(i))
 	cout<<i << endl;
}
}
