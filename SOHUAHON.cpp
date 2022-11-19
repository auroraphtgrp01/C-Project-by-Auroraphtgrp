#include<iostream>
using namespace std;
int ts(int n)
{ 
 int s1=0;
for(int i=1; i<=n/2;i++)
{ 
 	if(n%i==0) s1+=i;
	 }
return s1;
}
main()
{
	int n,m;
	for(int i=48; i<=10000;i++) 
	{
		int j=ts(i)-1;
	
	  if(i < j && ts(j)-1==i)
	  cout<<i<<" - " <<j<<endl;
}
	  }	  
 
	