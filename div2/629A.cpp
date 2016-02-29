#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n;
cin>>n;
char mat[n][n];
int r = 0,c = 0,ans=0;
for(int i =0;i<n;i++){
	r = 0;
	for(int j =0;j<n;j++){
		cin>>mat[i][j];
		if(mat[i][j]=='C'){
			r++;
		}
	}
	ans+=r*(r-1)/2;
	// cout<<endl;
}
for(int i =0;i<n;i++){
	c = 0;
	for(int j =0;j<n;j++){
		if(mat[j][i]=='C'){
			c++;
		}
	}
	ans+=c*(c-1)/2;
	// cout<<endl;
}
cout<<ans<<endl;
return 0;
}