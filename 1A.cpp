#include <iostream>
using namespace std;
long long flagstone(long long  n,long long  m,long long  a){
	if(n%a==0&&m%a==0){
		return (n*m)/(a*a);
	}
	else{
		return ((m+a-1)/a)*((n+a-1)/a);
	}
}
int main(){
	long long n,m,a,result;
	cin>>n>>m>>a;
	cout<<flagstone(n,m,a);
	return 0;
}