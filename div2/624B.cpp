#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
long long n;
cin>>n;
long long ar[n];
for(long long i=0;i<n;i++){
	cin>>ar[i];
}
sort(ar,ar+n);
long long max = ar[0];
for(long long i = 1 ;i<n;i++){
	if(ar[i]==ar[i-1]){
		max+=ar[i]-1;
	}
	else{
		max+=ar[i];
	}
}
cout<<max;
return 0;
}