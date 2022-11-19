#include<iostream>
using namespace std;
int KT(int n)
{
int s=0,chan=0,le=0;
	while(n!=0) 
	 {
	  	s=n % 10;
		if(s % 2 == 0) chan+=s;
	    else le+=s;
		n=n/10; 
		
	 } 	
	if(chan==le)  return true;
	else return false;
}
main()
{
	int a,b,d=0;
	cin>> a >> b; 
	for(int i=a;i<=b;i++)
	{if(KT(i)) d++;}
cout<<d;	
}
