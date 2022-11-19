#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char A[200],Alpha[27],alpha[27];
	int B[200];
	cin.getline(A,200);
	int l=strlen(A);
	int i=0;
	for(char c='A'; c<='Z';c++)
	{ 
	 	Alpha[i]=c;
		i++;
	}
	i=0;
	for(char c='a'; c<='z';c++)
	{ 
	 	alpha[i]=c;
		i++;
	}
	for(int i=0; i<26; i++)
	{
		B[i]=0;
	}
    alpha[strlen(alpha)]='/0';
	
	for(int i=0; i<l; i++)
	{
		for(int d=0; d<26; d++)
		{
			if(A[i]==alpha[d] || A[i]==Alpha[d]) B[d]++; 
		}
		
	}
	for(int i=0; i<26; i++) 
	if(B[i]!=0) cout<<B[i]<<Alpha[i];
	}
