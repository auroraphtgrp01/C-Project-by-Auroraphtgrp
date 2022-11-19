#include <iostream>
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
int TBP(int A[200],int n){
	int tong = 0;
	for (int i = 0 ; i < n ; i++){
		if (A[i] < 0) {
			tong = tong + (A[i]*A[i]) ;
			
		}
	}
	return tong;
}
 main(){
	int A[200], n ;
	nhapMang(A,n);
	xuatMang(A,n);
	cout << "\nTong binh phuong cua so Am la : " << TBP(A,n);
	
}
