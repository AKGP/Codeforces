#include <iostream>
#include <vector>
#include <algorithm>
// long long ar[1000000];
using namespace std;
int main(){
	long n,m;
	cin>>n>>m;
	long ar[n];
	for(long i =0;i<n;i++){
		cin>>ar[i];
	}
		long l,r,x;
	for(long j =0;j<m;j++){
	
		cin>>l>>r>>x;
		l--;
		r--;
		long ans = 0;
		for(long k =l;k<=r;k++){
			if(ar[k]!=x){
				ans = k;
			}
		}
		if(ans>0){
		cout<<ans+1<<endl;}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}