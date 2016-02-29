#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
long long n;
cin>>n;
int c =0;
int min = 1000000;
if(n>5){
while(n>5){
	c+=n/5;
	n = n%5;
}
}
if(n<=5&&n>0){
	c+=1;
}
cout<<c;
return 0;}