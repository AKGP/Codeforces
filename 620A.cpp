#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	double x1,y1,x2,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	// long double ans = min(abs(y2-y1),(x2-x1));
	ans = max(abs(y2-y1),abs(x2-x1));
	cout<<int(ans);
	return 0;
}