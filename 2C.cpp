#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
int n;
cin>>n;	
int ar[n];
for(int i =0;i<n;i++){
	cin>>ar[i];
}	
int a=0;
int sum_a=ar[0];
int b=0;
int sum_b=ar[n-1];
int l =0;
int r = n-1;
if(sum_a>sum_b){
	a=0;
	b=1;
}
else{
	a=1;
	b=0;
}
while(l<r){
if(sum_a>sum_b){
	sum_b+=ar[r-1];
	b++;
	r--;
}
if(sum_a<sum_b){
	sum_a+=ar[l+1];
	a++;
	l++;
}
}
cout<<a<<" "<<b;
return 0;
}