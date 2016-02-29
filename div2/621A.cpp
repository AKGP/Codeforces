#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long ar[n];
	long long sumodd = 0,sumeven=0;
	vector<long long> ev;
	vector<long long> odd;
	for(long long i =0;i<n;i++){
		cin>>ar[i];
		if(ar[i]%2==0){
			ev.push_back(ar[i]);
			sumeven+=ar[i];
		}
		else{
			odd.push_back(ar[i]);
			sumodd+=ar[i];
		}
		
	}
	
	if(odd.size()%2==0){
		cout<<sumodd+sumeven;
	}
	else{
		int j =0;
		sort(odd.begin(),odd.end());
		while(sumodd%2!=0){
			sumodd-=odd[j];
			j++;
		}
		cout<<sumodd+sumeven;
	}

return 0;
}