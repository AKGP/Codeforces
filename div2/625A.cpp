#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
long long n,n1,n2,n3,n4,a,b,c,count = 0;
cin>>n>>a>>b>>c;
if(b-c>a){
	count = n/a;
}
else{
	count = (n-c)/(b-c);
}
cout<<count;
return 0;
}