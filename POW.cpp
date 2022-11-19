#include<iostream>
using namespace std;
int POW(int a, int k)
{ 
     int s=1, i=0;
     while ( i != k) 
      { 
           s=s*a;
           i++;
      }
    return s; 
}
main()
{
    int a, k; 
    cin>>a>>k;
    cout<<POW ( a, k );
}