#include <iostream>
#include <vector>
#include <algorithm>
// long long ar[1000000];
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long a,p;
	long long i;
	for(i=1;i<=n;i++){
		if(i*(i-1)>(n-1)*2){
			break;
		}
	}
	long long k;
	k = (i-1)*(i-2)/2;
	cout<<n-k;
	return 0;
}