#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cowsignal.in","r",stdin);
	freopen("cowsignal.out","w",stdout);
	int k, m, n;
	cin>>m>>n>>k;
	
	for(int i=0;i<m;i++){
		string outputline;
		string line;
		cin>>line;
		for(int x=0;x<n;x++){
			for(int y=0;y<k;y++){
			outputline+=line[x];
			}
		}	
		for(int l=0;l<k;l++){
			cout<<outputline<<endl;
		}
	}
}