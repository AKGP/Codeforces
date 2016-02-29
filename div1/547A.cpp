#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#define long long ll
using namespace std;
int sol(int h1,int a1,int x1,int y1,int h2,int a2,int x2,int y2,int m){
int t1=0,t2=0;
int temp1 = h1,temp2=h2;
while(h1!=a1){
	t1++;

	h1 = (x1*h1+y1)%m;
	if(h1==temp1) {return -1;}
}
while(h2!=a2){
	t2++;
	cout<<h2<<" ";
	h2 = (x2*h2+y2)%m;
	if(h2==temp2) return -1;
	
}

if(h1==h2){
	return max(t1,t2); 
}

}
int main(){
int m,h1,a1,x1,y1,h2,a2,x2,y2;
cin>>m>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;

cout<<sol(h1,a1,x1,y1,h2,a2,x2,y2,m);
return 0;
}