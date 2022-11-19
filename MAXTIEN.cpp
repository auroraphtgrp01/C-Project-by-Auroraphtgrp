#include<iostream> 
using namespace std;
main(){
int a,b,c,x,maxtien;
cin>>a>>b>>c;
for(int i=0; i<=c/a;i++)
    for(int j=0; j<=c/b;j++)
        {
            x=i*a+j*b;
            if(x<=c && maxtien<x)
            maxtien=x;
        }
cout<<maxtien;
}