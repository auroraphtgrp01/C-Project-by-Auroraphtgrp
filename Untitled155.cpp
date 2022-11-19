#include<iostream>

#include<conio.h>

using namespace std;


#define TRUE 1 

#define FALSE 0 

int G[100][100], n, Cache[100]; 

void Init(){ 

 freopen("DFS.IN", "r", stdin); 

 cin>>n; 

 cout<<"So dinh cua ma tran n = "<<n<<endl;

 //nhap ma tran lien ke.

 for(int i=1; i<=n;i++){ 

  for(int j=1; j<=n;j++){ 

   cin>>G[i][j]; 

  } 

 } 

} 

/* Depth First Search */

void DFS(int G[][100], int n, int v, int Cache[]){ 

 cout<<"Duyet dinh : "<<v<<endl;

 int u; 

 Cache[v]=FALSE; 

 for(u=1; u<=n; u++){ 

  if(G[v][u]==1 && Cache[u]) 

   DFS(G,n, u, Cache); 

 } 

} 

main(void){ 

 Init(); 

 for(int i=1; i<=n; i++) 

  Cache[i]=TRUE; 

 for(int i=1; i<=n;i++) 

  if(Cache[i]) 

   DFS( G,n, i, Cache); 

 

}
