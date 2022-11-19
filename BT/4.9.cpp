#include<iostream>
#include<cmath>
using namespace std;
void Output(int A[200][200],int n)
{

	 for(int i=0;i<n;i++)
	 {
	 	for(int j=0; j<n; j++)
	 	{
	 		cout<<A[i][j]<<"   ";
		 }
		 cout<<endl;
	 }
}
main()
{
	int A[200][200], n, c;
	cin>>n;
	n+=2;
	for(int i=0;i<n;i++ ) 
	 {
	 for(int j=0;j<n;j++)
	  { 
		A[i][i]=1;	
	  	A[i][0]=1;
	  } 
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(j!=1)
				A[i][j]=A[i-1][j]+A[i-1][j-1];
		}
    }
				
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			{
				if(A[i][j]!=0)
					cout<<A[i][j]<< " ";
			}
					cout<<endl;
	}

}
	 
	 
	 
	 
	 

