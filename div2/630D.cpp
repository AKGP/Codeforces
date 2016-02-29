#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n==0){
		cout<<1;
	}
	else{
		cout<<1+(n)*(3+3*n);
	}
	return 0;

}