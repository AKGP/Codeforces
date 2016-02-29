#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int l;
cin>>l;
int ar[l];
long long int ans=1;
int flag = 0;
vector <int> v;
for(int i =0;i<l;++i){
	int x ;
	cin>>x;
	if(x==1){
		flag = 1;
		// cout<<i<<" ";
v.push_back(i);
	}
	// cout<<i<<" ";
}
if(v.size()>1){
	for(int j =0;j<v.size()-1;j++){
	// cout<<v[j]<<" ";
	ans*=abs(v[j+1]-v[j]);
}
}
else{
	ans = 1;
}
if(flag)cout<<ans;
else cout<<0;
return 0;
}