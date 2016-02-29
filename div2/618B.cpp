#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int ar[50][50];
	int n;
	cin>>n;
	std::vector<int> v;
	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			cin>>ar[i];
		}
		v.push_back(ar[i]+1);
	}
 return 0;
}