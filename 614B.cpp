#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
int n;
string s,ans="1";
int cnt = 0;
cin>>n;
for(int i =0;i<n;i++){
	cin>>s;
	if(s=="0"){
		ans = s;
		break;
	}
	while(s[s.size()-1]=='0'){
	cnt++;
	s.erase(s.end()-1);
	
	}
	if (ans=="1")
		ans = s;
	
}
cout<<ans;
	if (ans!="0")for(int i =0;i<cnt;i++){
		cout<<"0";
	}
return 0;
}