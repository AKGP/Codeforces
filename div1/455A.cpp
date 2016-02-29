#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
long long a[100000],m[100000];
using namespace std;
int main(){
	long long n;
	cin>>n;
	int ar[n];
	long long l = 0;
	for(int i =0;i<n;i++){
			cin>>ar[i];
			a[ar[i]]++;
			if(l<ar[i]){
				l = ar[i];
			}
			
	}
	m[0] = 0;
	m[1] = 1;
	int i;
	for(i = 0;i<=l;i++){
		m[i] = max(i*a[i]+m[i-2],m[i-1]);
	}
	cout<<m[l];
	return 0;
}