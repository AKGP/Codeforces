#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
int a,b,c=0,d=0,m=0,n;
cin>>n;
for(int i =0;i<n;i++){
	cin>>b;
	if(b>=c){
		c = b;
		d++;
	}
	else{
		m = max(m,d);
		c = b;
		d = 1;
	}
	
}
cout<<max(m,d);
return 0;
}