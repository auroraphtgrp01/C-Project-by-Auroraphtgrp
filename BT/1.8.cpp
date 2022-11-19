#include<iostream>
using namespace std;
int length(char A[]){ 
	int i=0;
	while(1)
	{ 
		if(A[i]=='\0') return i;
		i++;
	}
}
main()
{
	char A[200], KT[200];
	int n,vtri=0;
	cin.getline(A,200);
	cin>>n;
	int i=1;
		for(char d='A';d<='Z';d++)
	{
		KT[i]=d;
		i++;
	}
	for(int k=0; k<i;k++)
	{
		if(KT[k]==A[0]) 
		{
			vtri=k;
			break;
		}
	}
	int x=(vtri+n)%26;
	cout<<KT[x];
}
