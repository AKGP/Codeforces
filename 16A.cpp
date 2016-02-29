#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char mat[n][m];
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	int flag=1;
	int j;
	for(int i =0;i<n;i++){
		for(j =0;j<m-1;j++){
			if(mat[i][j]!=mat[i][j+1]){
				flag = 0;
				break;
			}

		}
		if(mat[i][j]==mat[i+1][j]){
			flag = 0;
			break;
		}

	}
	if(flag){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}