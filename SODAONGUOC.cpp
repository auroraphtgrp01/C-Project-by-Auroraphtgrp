//So dao nguoc
#include<iostream>	
using namespace std;
void sht(long long n)
{
long long  i=1,s;
while(n!=0) 
 { 
  	s=n%10;
  	n=n/10;
  	cout<<s;
 }
}
main()
{
	long long  n;
	cin>>n;
sht(n);
}


