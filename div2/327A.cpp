#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{	int a[100];
	vector <int> v;
	int n;
	cin>>n;
	int ar[n];
	int total=0;
	for(int i =0;i<n;i++){
		cin>>ar[i];
		if(ar[i]==1)total++;
	}
	int temp,max=0;
	// cout<<endl;
	int m = 0;
	int tem[n];
	bool flag = false,flag1 = false;
	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			temp = total;
			for(int k = j;k<=i;k++){
				if(ar[k]==1){
					temp--;
					flag1=true;
				}
				if(ar[k]==0){
					temp++;
				}
			}
			if(temp>max){
				max = temp;
			}
			if(temp ==0){
				flag = true;
			}
		}
	}
	if(flag&&max==n&&flag1){
		max = max-1;
	}	
cout<<max;
return 0;
}