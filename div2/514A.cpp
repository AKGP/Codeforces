#include <testlib.h>
using namespace std;
int main() {
long long s;
vector <int> v;
cin>>s;
long long n = s;
while(n>0){
		
		v.push_back(n%10);	
		// cout<<n%10<<" ";
		n/=10;

}
for(int i =v.size()-1;i>=0;i--){
		if(v[v.size()-1]==9&&i==v.size()-1){
				v[v.size()-1]=9;
		}
		else{
			if(v[i]>=5){
				v[i] = 9-v[i];
			}

		}

		
}
for(int i =v.size()-1;i>=0;i--){
cout<<v[i];
}
return 0;
}