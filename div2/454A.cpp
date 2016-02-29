#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
typedef long long ll;
typedef long double ld;
#define repi(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
int main(){
	int n;
	cin>>n;
	char mat[n][n];
	repi(i,0,n/2){
		repi(j,0,n/2){
			if(j>=(n/2-i))mat[i][j] ='D';
			else mat[i][j] = '*';
			
		}
		
	}
	repi(i,0,n/2){
		repi(j,n/2+1,n-1){
			mat[i][j] = mat[i][n-j-1];	
		}	
	}
	repi(i,n/2+1,n-1){
		repi(j,0,n-1){
			mat[i][j] = mat[n-i-1][j];	
		}	
	}
	repi(i,0,n-1){
		repi(j,0,n-1){
			
			cout<<mat[i][j]; 
		}
		cout<<endl;
	}
	return 0;
}