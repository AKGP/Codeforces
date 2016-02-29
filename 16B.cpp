#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	int mat[t][t];
	for(int i =0;i<t;i++){
		for(int j =0;j<t;j++){
			cin>>mat[i][j];
		}
	}
	for(int i =0;i<t;i++){
		if(mat[i+1][j])
		cout<<endl;
	}
return 0;
}