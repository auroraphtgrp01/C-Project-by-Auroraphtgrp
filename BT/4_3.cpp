#include<bits/stdc++.h>
using namespace std;
void nhapMang(int A[], int &n){
	cin >> n ;
	for(int i = 0; i < n ; i++){
		cin >> A[i];
	}
}
void xuatMang(int A[],int n){
	for(int i = 0; i < n ; i++){
		cout << A[i] << " ";
	}
}
int max(int A[], int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++)
        if (max < A[i]){	
          max = A[i];
        }  
    return max;
}
float TBC(int A[200],int n){
	float tong = 0; float tbc = 0, d = 0 ;
	for (int i = 0 ; i < n ; i++){
		if (A[i] % 2 == 0) {
			d++ ;
			tong = tong + A[i] ;
			
		} 
		
	}tbc = tong / d++ ;
	return tbc;
}

 main(){
	int A[200],n ;float tong, tbc;
	nhapMang(A,n);
	xuatMang(A,n);
	double x = TBC(A,n), f;
	f = roundf(x*100)/100;
	cout << "\nTrung binh cong cua so chan la : " << f;
	
	
}
