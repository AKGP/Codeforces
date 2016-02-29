#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	bool f = false;
	for(int i =0;i<=c;i+=a){
		for(int j =0;j<=c;j+=b){
			if(i+j==c){
				f = true;
				cout<<"Yes";
				break;
			}

		}
		if(f){
				break;
			}
	}
	if(!f){
		cout<<"No";
	}
}