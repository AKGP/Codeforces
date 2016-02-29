#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
double d,l,v1,v2;
cin>>d>>l>>v1>>v2;
double ans = (l-d)/(v1+v2);
printf("%6lf",ans);
return 0;
}