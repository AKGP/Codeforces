#include <iostream>
#include <vector>
using namespace std;
int main(){
	long long l,r,k;
	cin>>l>>r>>k;

	long long temp;
	if(l==1){
		temp = 1;
	}
	else{
		temp = k;
	}
	
	vector <long long> v;	
	while(temp<=r){
		 
		if(temp>=l){
			v.push_back(temp);
		}
		if(r/k>=temp){
		temp*=k;
	}
	else{
		break;
	}
	
}
if(v.size()>0){
		for(int i =0;i<v.size();i++){
				cout<<v[i]<<" ";
		}
}
else{
	cout<<"-1";
	
}
return 0;
}