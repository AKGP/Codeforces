#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>v;
	while(n--){
		int x,y;
		cin>>x;
		
		for(int i =0;i<x;i++){
			cin>>y;
			v.push_back(y);
		}
		

	}
	set<int>s(v.begin(),v.end());

// cout<<(m)<<endl;
// cout<<(s.size())<<endl;
	if((int)m==(int)s.size()){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
