#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);

	int n;
	cin>>n;
	vector<int>shell_pos={0,1,2};
	vector<int> counter(3);
	for(int i=0;i<n;i++){
		int a,b,g;
		cin>>a>>b>>g;
		a--,b--,g--;
		std::swap(shell_pos[a],shell_pos[b]);
		counter[shell_pos[g]]++;
	}		
	cout<<max({counter[0],counter[1],counter[2]});
}