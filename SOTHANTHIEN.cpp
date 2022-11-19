#include<iostream>
using namespace std; 
int tongUoc(int n)
{ 
 	int s=0;
 	for(int i=1; i<= n/2 ; i++)
 	 	{
 	 		if( n % i == 0 ) 
 	 		 { 
 	 		  	s+=i;
			   }
		  }
		  return s;
}
main()
{ 
 	for(int i=1;i<100000;i++)
 	{ 
 	 	int j=tongUoc(i);
 	 	if(i<j && tongUoc(j)==i)
 	 	{ 
 	 		cout << i << " " << j << endl;
		  }
	 }
}
