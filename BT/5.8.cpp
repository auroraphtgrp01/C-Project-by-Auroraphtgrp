#include<iostream>
#include<string.h>
using namespace std;
void Process(char A[200])
{
	int vtridau=0, vtricuoi=0;
	int l=strlen(A);vtricuoi=l;
	for(int i=l-1; i>=0; i--)
	{	
		if(A[i]!=' ') 
		{
			vtridau++;
		}
		else
		{
			for(int i=(vtricuoi-vtridau);i<=vtricuoi;i++) cout<<A[i];
		vtridau=0;
		vtricuoi=i;
		}
			
	}	
	for(int i=0; i<=vtridau; i++) cout<<A[i];
}
main()
{
	char A[200]; 
	cin.getline(A, 200);
	Process(A);

}
