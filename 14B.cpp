#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
int main(){
	int n,x;
	int mi=0,ma = 100000;
	cin>>n>>x;
	int d = 0;
	for(int i =0;i<n;i++){
		int a,b;
		cin>>a>>b;
		int l = min(a,b);
		int r = max(a,b);
		mi = max(mi,l);
		ma = min(ma,r);
	}
	if(mi>ma){
		cout<<-1;
	}
	else if(mi>=x){
		cout<<mi-x;
	}
	else if(ma<=x){
		cout<<x-ma;
	}
	else{
		cout<<0;
	}
	return 0;
}