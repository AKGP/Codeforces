#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string text,pat;
	cin>>text>>pat;
	int n = text.length();
	int m = pat.length();
	int c = 0;
	for(int i =0;i<=n-m;i++){
		if(text.substr(i,m)==pat){
			c++;
			i+=m-1;
		}
	}
	cout<<c;
return 0;
}