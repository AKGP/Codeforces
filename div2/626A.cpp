#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
int n;
string s;
cin>>n;
cin>>s;
int cnt=0,x=0,y=0;
bool flag = false;
for(int i =0;i<n;i++){
	x=y=0;
		for(int j=i;j<n;j++){
		
		if(s[j]=='R'){
			x++;
		}
		if(s[j]=='L'){
			x--;
		}
		if(s[j]=='U'){
			y++;
		}
		if(s[j]=='D'){
			y--;
		}
		if(x==0&&y==0){
			cnt++;
		}
}
}
cout<<cnt;
return 0;
}