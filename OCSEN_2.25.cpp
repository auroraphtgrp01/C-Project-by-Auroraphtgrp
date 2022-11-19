#include<iostream>
using namespace std;
main()
{
	int v,a,b,dec=1,dem=0;
	cin >> a >> b >> v; 
	while ( dec != v) 
	 { 
	  	dec=dec+a;
	  	dec=dec-b;
	  	dem++;
	  	} 

	cout<<dem;
}
