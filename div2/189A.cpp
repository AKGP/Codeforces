#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
int n,a,b,c,ans1=0,ans2=0,ans3=0,ans4=0,ans5=0;
cin>>n>>a>>b>>c;
ans1=n/a;
ans2=n/b;
ans3=n/c;
cout<<max(ans1,max(ans2,max(ans3,max(ans4,ans5))));
return 0;
}