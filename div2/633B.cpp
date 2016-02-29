#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	vector <int> v;
	for(int i =0;i<=10000000;i++){
		float j =i;
		float k =5;
		int c =0;
		while(j>=k){
			c += int(j/k);
			k = k*5;
		}
		if(c==m){
			v.push_back(i);
		}
	}
	cout<<v.size()<<endl;
	for(int i =0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}