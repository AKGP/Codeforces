#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int main()
{	
	int y,w;
	cin>>y>>w;
		int m = max(y,w);
		int c=0;
		for(int i =m;i<=6;i++){
			c++;
		}
		if(c==1){
			cout<<"1/6";
		}
		if(c==2){
			cout<<"1/3";
		}
		if(c==3){
			cout<<"1/2";
		}
		if(c==4){
			cout<<"2/3";
		}
		if(c==5){
			cout<<"5/6";
		}
		if(c==6){
			cout<<"1/1";
		}
	
	return 0;
}