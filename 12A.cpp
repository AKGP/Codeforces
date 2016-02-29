#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char mat[3][3];
	for(int i =0;i<3;i++){
		for(int j =0;j<3;j++){
			cin>>mat[i][j];
		}
	}
	for(int i =0;i<3;i++){
		for(int j =0;j<3;j++){
			cout<<mat[i][j];
		}
		cout<<endl;
	}
	if(mat[0][0]==mat[2][2]&&mat[0][1]==mat[2][1]&&mat[0][2]==mat[2][0]&&mat[1][0]==mat[1][2]){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}