#include <iostream>
#include <cmath>
#include <algorithm>
#define MAX 366
int m[MAX],f[MAX],r[MAX];
using namespace std;
int main(){
	int n;
	cin>>n;
	int ma = 0;
	for(int i =0;i<n;i++){
		char c;
		int a,b;
		cin>>c>>a>>b;
		if(c=='M'){
			m[a]++;
		}
		else{
			f[b]++;
		}
		int ind = 2*min(a,b);
		r[ind]++;
		ma = max(r[ind],ma);
	}
	cout<<ma+1;
	return 0;
}