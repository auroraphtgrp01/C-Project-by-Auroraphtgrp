//So nguyen to
#include<iostream>	
#include<cmath>
using namespace std;
int snt(int n)
{
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
	{ 
		if(n % i == 0 ) 
	
	{
			return false;}
			  	 	
		}
		return true;
}

main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{if(snt(i)) cout<<i<<" ";
	}
	
}

