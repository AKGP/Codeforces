#include <iostream>
using namespace std;
int main()
{	int n,m,x1=51,x2=-1,y1=51,y2=-1;
	cin>>n>>m;
	char mat[50][50];
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>mat[i][j];
			if(mat[i][j]=='*'){
			if(i<x1){
				x1=i;
			}
			if(i>x2){
				x2=i;
			}
			if(j<y1){
				y1 = j;
			}
			if(j>y2){
				y2 = j;
			}
		}
		}
	}
	for(int i =x1;i<=x2;i++){
		for(int j =y1;j<=y2;j++){
			cout<<mat[i][j];
		}
		cout<<endl;
	}
}