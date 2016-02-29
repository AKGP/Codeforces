#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{	int n,m;
	char c;
	cin>>n>>m>>c;
	char mat[n+2][m+2];
	for(int i =0;i<n+2;i++){
		for(int j =0;j<m+2;j++){	
			if(i==0||i==n+1||j==0||j==m+1){
				mat[i][j]='.';
			}
			else{
							cin>>mat[i][j];

			}
		}
	}
	vector<char> v;
	
	for(int i =1;i<n+1;i++){
		for(int j =1;j<m+1;j++){
			// cout<<mat[i][j]<<" ";
			if(mat[i][j]==c){
				if(mat[i+1][j]!='.'&&mat[i+1][j]!=c){
					v.push_back(mat[i+1][j]);
				}
				if(mat[i-1][j]!='.'&&mat[i-1][j]!=c){
					v.push_back(mat[i-1][j]);
				}
				if(mat[i][j+1]!='.'&&mat[i][j+1]!=c){
					v.push_back(mat[i][j+1]);
				}
				if(mat[i][j-1]!='.'&&mat[i][j-1]!=c){
					v.push_back(mat[i][j-1]);
				}
			}
		}
		// cout<<endl;
	}
	set<char>s(v.begin(),v.end());
	cout<<s.size();
	return 0;
}