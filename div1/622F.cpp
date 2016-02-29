#include <iostream>
using namespace std;
long long  MOD=1000000000+7;
long long power(long long n,long long k){
	long long x;
	if(k==0){
		return 1;
	}
	else{
		x = power(n,k/2);
		if(k%2==0) return x*x%MOD;
		return n*x*x%MOD;
	}
}
int main(){
	long long n,k,ans=0;
	cin>>n>>k;
	if(k==0) cout<<n;
	else{
	for(long long i =1;i<=n;i++){
		// ans = ans%(1000000007);
		ans+=power(i,k);
		
	}
	cout<<ans%MOD;
}
	return 0;

}