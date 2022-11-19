#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char A[200];
	cin.getline(A,200);
	int l=strlen(A);
	int i=0;
	for(int i=0; i<l; i++)
	 {
	 	int vtri=0;
		 	for(char c='0';c<='9';c++)
	 		{
	 			if(A[i]==c) vtri=i;
			 }
		if(vtri!=0) cout<<A[vtri];	 
}
	
}
