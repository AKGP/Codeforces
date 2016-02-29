#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
long long mat[n][n];

long long max = -1,c_sum = 0,sum = 0;
bool i_max = true,i = true;
long long ar[n];
for(int i =0;i<n;i++){
	for(int j =0;j<n;j++){
		cin>>mat[i][j];
		ar[j] += mat[i][j];
		sum+=mat[i][j];
		if(i!=n-1){
			if(mat[i][j]>mat[i+1][j]){
				i = false;
			}

		}
	}
}
max = ar[k-1];
for(int i =0;i<n;i++){
	if(ar[i]>max){
		i_max = false;
	}
}
long long sum_sq;
sum_sq = n*(2*n+1)*(n+1)/6;
if(i&&i_max&&sum_sq==sum){
	
}
return 0;
}