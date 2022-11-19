#include<iostream>
using namespace std; 
void Input(int A[], int &n)
{
    cin>>n;
    for(int i=0; i<n;i++)
    cin>>A[i];
}
main()
{
     int A[200],n,s,k,vtri,giatri;
     Input(A,n);
     cout<<"Nhap vtri";
     cin>>vtri;
    for(int i=vtri;i<n;i++)
{
    A[i]=A[i+1];
}
n--;
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
}