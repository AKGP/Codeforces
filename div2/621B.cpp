#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
int a[2001],b[2001];
using namespace std;
int main()
{	int n;
	
	cin>>n;
	
	int c=0;
	int x,y;
	for(int i =0;i<n;i++){
		cin>>x>>y;
		c+=a[x+y]++;
		c+=b[1000+x-y]++;
	}
	cout<<c;
	return 0;
}