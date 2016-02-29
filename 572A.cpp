#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int na,nb,i,j;
cin>>na>>nb;
int ar[na],br[nb];
cin>>i>>j;
i = i-1;
j = j-1;
for(int p = 0; p <na;p++){
	cin>>ar[p];
}

for(int p = nb-1; p >=0;p--){
	cin>>br[p];
}
if(br[j]>ar[i]){
	cout<<"YES";
}
else{
	cout<<"NO";
}
return 0;
}