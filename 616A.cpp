#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int main(){
string a,b;
cin>>a>>b;
int l = abs((int)b.length()-(int)a.length());
string sub (l,'0');
if(a.length()>b.length()){
	b = sub+b;
}
if(a.length()<b.length()){
	a = sub+a;
}
if(a==b){
	cout<<"="<<endl;

}
if(a>b){
	cout<<">"<<endl;
	
}
if(a<b){
	cout<<"<"<<endl;
	
}
return 0;
}