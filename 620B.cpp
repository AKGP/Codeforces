#include <iostream>
using namespace std;
int main()
{
	int l,r;
	cin>>l>>r;
	int s[] = {6,2,5,5,4,5,6,3,7,6};
	int ans = 0;
	for(int i =l;i<=r;i++){
		for(int j =i;j>0;j/=10){
			ans+=s[j%10];
		}
	}
	cout<<ans;
	return 0;
}